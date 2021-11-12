#ifndef COMPANY_MENU_H
#define COMPANY_MENU_H
#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"



void Student_Details_Menu (vector <Student> &Students){

    while(true){
        cout<<endl;
        display_students(Students);
        
        cout<<"Choose from the following:\n1.See student in detail\n2.Compare two students\n3.Return to previous menu\n4.Exit\n->";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            int index;
            cout<<"Enter the serial number of the student whom you want to see in detail: ";
            cin>>index;
            cout<<Students[index-1];
            break;
        case 2:
            int index1,index2;
            cout<<"Enter the serial number of the students whom you want to compare: ";
            cin>>index1>>index2;
            cout<<"Result: ";
            if(Students[index1-1]>Students[index2-1]){
                cout<<"  Student 1 is better than Student 2\n";
                cout<<Students[index1-1];
            }else{
                cout<<"  Student 2 is better than Student 1\n";
                cout<<Students[index2-1];
            }
            break;
        case 3:
            return;
        case 4:
            display_thank_you();
            exit(0);
        default:
            cout<<"\n  Invalid choice"<<endl;
            break;
        }
    }
     
}

void Company_Details_Menu(vector<Company> &Companies,vector<College> &Colleges){


    int selected_company = 0;
    while(true){

        //Select the detail which the student wants to see 
        int offer = 1;

        //Exit if chosen
        if(offer==3){
            display_thank_you();
            return;
        }

        if(!selected_company){
            //Display the companies
            display_companies(Companies);
            cout<<"Which company are you from? \n(Enter Serial Number): ";
            cin>>selected_company;

            //Display the details of particular company
            cout<<Companies[selected_company-1];
            cout<<endl;
        }
        cout<<"Choose the number of what you want to see/edit:"<<endl;
        cout<<"1.Jobs\n2.Internships\n3.Return to previous menu\n4.Exit\n->";
        cin>>offer;
        //Display job or internship for selected company
        //based on the selected option
        switch(offer){
            case 1: 
                int choice, owner;
                Companies[selected_company - 1].display_job(owner=1);
                cout<<"\n"<<endl;
                cout<<"\t\t\t============================================================================"<<endl;
                cout <<"\nEnter serial number of the job to see/edit in detail\n(0 if you wish to skip/add/delete a job): ";
                cin >> choice;
                if (choice){
                    Companies[selected_company - 1].get_job(choice);
                    int ch;
                    cout<<"\nEnter 1 if you wish to edit the salary else enter 0: ";
                    cin>>ch;
                    if(ch){
                        Companies[selected_company - 1].update_job_salary(choice);
                    }
                }
                else
                {
                    int ch;
                    cout<<"\nEnter\n1.Add a job \n2.Delete a job\n3.Skip\n->";
                    cin>>ch;
                    switch (ch)
                    {
                    case 1:
                        Companies[selected_company - 1].append_job();
                        break;
                    case 2:
                        Companies[selected_company - 1].delete_job();
                        break;
                    default:
                        break;
                    }

                }
                cout<<"\t\t\t============================================================================"<<endl;
                break;
            case 2: 
                Companies[selected_company - 1].display_internship(1);
                cout<<"\n"<<endl;
                cout<<"\t\t\t============================================================================"<<endl;
                cout << "\nEnter serial number of the internship to see/edit in detail\n(0 if you wish to skip/add/delete an internship): ";
                cin >> choice;
                if (choice){
                    Companies[selected_company - 1].get_internship(choice);
                    int ch;
                    cout<<"Enter 1 if you wish to edit the salary else enter 0: ";
                    cin>>ch;
                    if(ch){
                        Companies[selected_company - 1].update_internship_salary(choice);
                    }
                }
                else
                {
                    int ch;
                    cout<<"\nChoose from the following:\n1.Add a intership\n2.Delete a intership\n3.Skip\n->";
                    cin>>ch;
                    switch (ch)
                    {
                    case 1:
                        Companies[selected_company - 1].append_internship();
                        break;
                    case 2:
                        Companies[selected_company - 1].delete_internship();
                        break;
                    default:
                        break;
                    }

                }
                cout<<"\t\t\t============================================================================"<<endl;
                break;
            case 3:
                return;
            case 4:
                display_thank_you();
                exit(0);
            default: 
                cout<<"  Invalid option"<<endl;
        }
    }
}


void Company_Menu(vector<Company> &Companies,vector<College> &Colleges,vector <Student> &Students){
    while(true){
        int choice;
    
        cout<<"\nChoose the following:\n1.Student Details\n2.Company Details\n3.Exit\n->";
        cin>>choice;
        switch (choice)
        {
        case 1:
            Student_Details_Menu(Students);
            break;
        case 2:
            Company_Details_Menu(Companies, Colleges);
            break;
        case 3:
            display_thank_you();
            exit(0);
        default:
            break;
        }
    }
}
#endif
