#ifndef STUDENT_MENU_H
#define STUDENT_MENU_H
#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Classes/College.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"


void offer_menu(vector<Company> &Companies){
    while(true){

        //Select the detail which the student wants to see 
        int offer = 1;
        cout<<endl;
        display_line(1);
        cout<<"\n\n  Choose the number of what you want to see:"<<endl;
        cout<<"  1.Jobs\n  2.Internships\n  3.Return to previous menu\n  4.Exit\n  ->";
        cin>>offer;
        display_line(1);

        //Return if chosen 
        if(offer==3){
            return;
        }

        //Exit if chosen
        if(offer==4){
            display_thank_you();
            exit(0);
        }

        //Display the companies
        display_companies(Companies);
        int selected_company = 1;
        cout<<"  Select the company you want to see: ";
        cin>>selected_company;

        //Display the details of particular company
        display_line(1);
        cout<<Companies[selected_company-1];
        cout<<endl;

        //Display job or internship for selected company
        //based on the selected option
        switch(offer){
            case 1: 
                Companies[selected_company - 1].display_job();
                break;
            case 2: 
                Companies[selected_company - 1].display_internship();
                break;
            case 3:
                return;
            case 4:
                display_thank_you();
                exit(0);
            default: 
                cout<<"  Invalid choice"<<endl;
        }
    }

}

void college_details_menu(vector<College> &Colleges,int selected_college){

    while(true){

        //Select the detail which the student wants to see 
        int option = 1;
        cout<<endl;
        display_line(1);
        cout<<"\n\n  Choose the number of what you want to see:"<<endl;
        cout<<"  1.College Details\n  2.Placement History\n  3.Placement Details of a particular year\n  4.Return to previous menu\n  5.Exit\n  ->";
        cin>>option;
        display_line(1);

        //Display job or internship for selected company
        //based on the selected option
        switch(option){
            case 1:
                cout<<Colleges[selected_college-1];
                break;
            case 2:
                Colleges[selected_college-1].placement_history();
                break;
            case 3:
                Colleges[selected_college-1].show_placement_stat();
                break;          
            case 4:
                return;
            case 5:
                display_thank_you();
                exit(0);
            default:
                cout<<"  Invalid choice"<<endl;
        }
    }
}

void student_details_menu(vector<Student> &Students){

    display_students(Students);

    int selected_student = 0;
    cout<<"  Choose your serial number: ";
    cin >> selected_student;

    while(true){

        //Select the detail which the student wants to see 
        int option = 1;
        cout<<endl;
        display_line(1);
        cout<<"\n\n  Choose the number of what you want to see:"<<endl;
        cout<<"  1.My Details\n  2.My Programs\n  3.Add new program\n  4.Return to previous menu\n  5.Exit\n  ->";
        cin>>option;
        display_line(1);

        //Display job or internship for selected company
        //based on the selected option
        switch(option){
            case 1:
                cout<<Students[selected_student-1];
                break;
            case 2:
                Students[selected_student-1].show_program();
                break;
            case 3:
                Students[selected_student-1].add_programmes();
                break;          
            case 4:
                return;
            case 5:
                display_thank_you();
                exit(0);
            default:
                cout<<"  Invalid choice"<<endl;
        }
    }
}

void Student_Menu(vector<Student> &Students,vector<Company> &Companies, vector<College> &Colleges){

    int choice = 0,selected_college = 0;
    while(true){

        cout<<"\n  Choose from the following:"<<endl;
        cout<<"\n  1.Offers\n  2.College Details\n  3.Student Details\n  4.Exit\n  ->";
        cin>>choice;

        switch(choice){
            case 1:
                offer_menu(Companies);
                break;
            case 2:

                if(!selected_college){
                    display_college_list(Colleges);
                    cout<<"  Enter the serial number of your college:";
                    cin>>selected_college;
                }

                college_details_menu(Colleges,selected_college);
                break;
            case 3:
                student_details_menu(Students);
                break;
            case 4:
                display_thank_you();
                exit(0);
            default:
                cout<<"  Invalid choice"<<endl;
        }
    }
}

#endif
