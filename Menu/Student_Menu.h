#include "../Classes/Student.h"
#include "../Classes/Company.cpp"
#include "../Utils/File.h"
#include "../Utils/Display.h"

#ifndef STUDENT_MENU_H
#define STUDENT_MENU_H

void Student_Menu(vector<Company> &Companies){

    while(true){

        //Select the detail which the student wants to see 
        int offer = 1;
        cout<<"Choose the number of what you want to see:"<<endl;
        cout<<"1.Jobs\n2.Internships\n3.Exit\n->";
        cin>>offer;

        //Display the companies
        display_companies(Companies);
        int selected_company = 1;
        cout<<"Select the company you want to see: ";
        cin>>selected_company;

        //Display the details of particular company
        cout<<Companies[selected_company-1];

        //Display job or internship for selected company
        //based on the selected option
        switch(offer){
            case 1: 
                cout<<"\tLIST OF JOBS"<<endl;
                Companies[selected_company - 1].display_job();
                continue;
            case 2: 
                cout<<"\tLIST OF INTERNSHIPS"<<endl;
                Companies[selected_company - 1].display_internship();
                continue;
            case 3:
                cout<<"Thank You"<<endl;
                return;
            default: 
                cout<<"Invalid offer"<<endl;
        }
    }

}

#endif