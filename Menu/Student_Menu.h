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
        display_line(1);
        cout<<"Choose the number of what you want to see:"<<endl;
        cout<<"1.Jobs\n2.Internships\n3.Return to previous menu\n->";
        cin>>offer;
        display_line(1);

        //Exit if chosen
        if(offer==3){
            cout<<"Thank You"<<endl;
            return;
        }

        //Display the companies
        display_companies(Companies);
        int selected_company = 1;
        cout<<"Select the company you want to see: ";
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
                cout<<"Thank You"<<endl;
                return;
            default: 
                cout<<"Invalid offer"<<endl;
        }
    }

}

void college_details_menu(vector<College> &Colleges,int selected_college){

    while(true){

        //Select the detail which the student wants to see 
        int option = 1;
        display_line(1);
        cout<<"Choose the number of what you want to see:"<<endl;
        cout<<"1.College Details\n2.Placement History\n3.Placement Details of a particular year\n4.Return to previous menu\n->";
        cin>>option;
        display_line(1);

        //Display job or internship for selected company
        //based on the selected option
        switch(option){
            case 1:
                cout<<Colleges[selected_college-1];
                break;
            case 2:
                //Function to be made by @VedRatan
            case 3:
                Colleges[selected_college-1].show_placement_stat();
                break;          
            case 4:
                return;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
}


void Student_Menu(vector<Company> &Companies, vector<College> &Colleges){

    int choice = 0,selected_college = 0;
    while(true){

        cout<<"Choose from the following:"<<endl;
        cout<<"1.Offers\n2.College Details\n->";
        cin>>choice;

        switch(choice){
            case 1:
                offer_menu(Companies);
                break;
            case 2:

                if(!selected_college){
                    display_college_list(Colleges);
                    cout<<"Enter the serial number of your college:";
                    cin>>selected_college;
                }

                college_details_menu(Colleges,selected_college);
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
}

#endif