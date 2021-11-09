#ifndef STUDENT_MENU_H
#define STUDENT_MENU_H
#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"


void Student_Menu(vector<Company> &Companies){

    while(true){

        //Select the detail which the student wants to see 
        int offer = 1;
        display_line(1);
        cout<<"Choose the number of what you want to see:"<<endl;
        cout<<"1.Jobs\n2.Internships\n3.Exit\n->";
        cin>>offer;
        display_line(1);

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
                cout<<"\t || LIST OF JOBS ||"<<endl;
                Companies[selected_company - 1].display_job();
                break;
            case 2: 
                cout<<"\t || LIST OF INTERNSHIPS || "<<endl;
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

#endif