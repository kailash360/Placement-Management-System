#ifndef COMPANY_MENU_H
#define COMPANY_MENU_H
#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"

void Company_Menu(vector<Company> &Companies,vector<College> &Colleges){


    int selected_company = 0;
    while(true){

        //Select the detail which the student wants to see 
        int offer = 1;

        //Exit if chosen
        if(offer==3){
            cout<<"Thank You"<<endl;
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
        cout<<"1.Jobs\n2.Internships\n3.Exit\n->";
        cin>>offer;
        //Display job or internship for selected company
        //based on the selected option
        switch(offer){
            case 1: 
                int choice, owner;
                Companies[selected_company - 1].display_job(owner=1);
                cout<<"\n"<<endl;
                cout<<"=========================================================================="<<endl;
                cout << "Enter serial number of the job to see/edit in detail\n(0 if you wish to skip/add/delete a job): ";
                cin >> choice;
                if (choice){
                    Companies[selected_company - 1].get_job(choice);
                    int ch;
                    cout<<"Enter 1 if you wish to edit the salary else enter 0: ";
                    cin>>ch;
                    if(ch){
                        Companies[selected_company - 1].update_job_salary(choice);
                    }
                }
                else
                {
                    int ch;
                    cout<<"Enter\n1->Add a job \n2->Delete a job\n3->Skip\n";
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
                cout<<"=========================================================================="<<endl;
                break;
            case 2: 
                Companies[selected_company - 1].display_internship();
                cout<<"\n"<<endl;
                cout<<"=========================================================================="<<endl;
                cout << "Enter serial number of the internship to see/edit in detail\n(0 if you wish to skip/add/delete a job): ";
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
                    cout<<"Enter\n1->Add a intership \n2->Delete a intership\n3->Skip\n";
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
                cout<<"=========================================================================="<<endl;
                break;
            case 3:
                cout<<"Thank You"<<endl;
                return;
            default: 
                cout<<"Invalid option"<<endl;
        }
    }
}

#endif