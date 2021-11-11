#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <iomanip>
#include "../Menu/Student_Menu.h"
#include "../Menu/Company_Menu.h"
#include "../Menu/College_Menu.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"

void Main_Menu(vector<Student> &students, vector<College> &colleges,vector<Company> &companies){

    display_project_name();
    
    while(true){
        int option;
        
        cout<<"\n\n\n  Choose from the following:\n";
        cout<<"  1.Student\n  2.Company\n  3.College Admin\n  4.Exit\n  ->";
        cin>>option;
        cout<<endl;
        
        switch(option) {
            case 1: 
                display_line(1);
                cout<<endl;
                display_role_text(1,0,0);
                Student_Menu(students,companies,colleges);
                break;
            case 2:
                display_line(1);
                cout<<endl; 
                display_role_text(0,1,0);
                Company_Menu(companies,colleges,students);
                break;
            case 3:
                display_line(1);
                cout<<endl;
                display_role_text(0,0,1);
                College_Menu(colleges);
                break;
            case 4:
                display_thank_you();
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
}

#endif
