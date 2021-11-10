#ifndef DISPLAY_H
#define DISPLAY_H

#include "../Classes/Company.h"
#include "../Classes/Job.h"
#include "../Classes/College.h"
using namespace std;

void display_line(int choice){
    switch(choice){
        case 1: 
            cout<<"======================================================="<<endl;
            break;
        case 2: 
            cout<<"-------------------------------------------------------"<<endl;
            break;
        default: 
            cout<<"==========================================="<<endl;

    }
}

void display_students(vector <Student> &Students){
    cout<<"\t  || LIST OF STUDENTS ||\n"<<endl;
    cout.width(5);
    cout<<"Serial No."<<"|";
    cout.width(12);
    cout<<"Name"<<"   \t|";
    cout.width(10);
    cout<<"Roll Number"<<"\t|";
    cout<<endl;
    display_line(2);

    int index = 1;
    for(auto student :Students){
        cout.width(5);
        cout<<index++<<" \t  |";
        cout.width(15);
        cout<<student.name<<"\t|";
        cout.width(10);
        cout<<student.roll_number<<"\t|";
        cout<<endl;
    }
    cout<<"\n"<<endl;
    display_line(1);    
}

void display_companies(vector<Company> &Companies){
    cout<<"\t  || LIST OF COMPANIES ||\n"<<endl;
    cout.width(5);
    cout<<"Serial No."<<"|";
    cout.width(12);
    cout<<"Name"<<"   \t|";
    cout.width(10);
    cout<<"Location"<<"\t|";
    cout<<endl;
    display_line(2);

    int index = 1;
    for(auto company :Companies){
        cout.width(5);
        cout<<index++<<" \t  |";
        cout.width(15);
        cout<<company.get_name()<<"\t|";
        cout.width(10);
        cout<<company.get_location()<<"\t|";
        cout<<endl;
    }
    cout<<"\n"<<endl;
    display_line(1);
}

void display_college_list(vector <College> &Colleges){
    cout<<"\t  || LIST OF COLLEGE ||\n"<<endl;
    cout.width(5);
    cout<<"Serial No."<<"|";
    cout.width(12);
    cout<<"Name"<<"   \t|";
    cout.width(10);
    cout<<"Location"<<"\t|";
    cout<<endl;
    display_line(2);

    int index = 1;
    for(auto college:Colleges){
        cout.width(5);
        cout<<index++<<" \t  |";
        cout.width(15);
        cout<<college.get_name()<<"\t|";
        cout.width(10);
        cout<<college.get_location()<<"\t|";
        cout<<endl;
    }
    cout<<endl;
    display_line(1);
}

void display_role_text(int student,int company,int college){
    if(student){
        cout<<" ____    _____   _   _   ____    _____   _   _   _____ "<<endl;
        cout<<"/ ___|  |_   _| | | | | |  _ \\  | ____| | \\ | | |_   _|"<<endl;
        cout<<"\\___ \\    | |   | | | | | | | | |  _|   |  \\| |   | |  "<<endl;
        cout<<"___) |    | |   | |_| | | |_| | | |___  | |\\  |   | |  "<<endl;
        cout<<"|____/    |_|    \\___/  |____/  |_____| |_| \\_|   |_|  "<<endl;                                                   
        cout<<endl;
    }

    if(company){
        cout<<" ____    ___    __  __   ____      _      _   _  __   __"<<endl;
        cout<<"/ ___|  / _ \\  |  \\/  | |  _ \\    / \\    | \\ | | \\ \\ / /"<<endl;
        cout<<"| |    | | | | | |\\/| | | |_) |  / _ \\   |  \\| |  \\ V / "<<endl;
        cout<<"| |___ | |_| | | |  | | |  __/  / ___ \\  | |\\  |   | |  "<<endl;
        cout<<"\\____|  \\___/  |_|  |_| |_|    /_/   \\_\\ |_| \\_|   |_|  "<<endl;
        cout<<endl;                                                           
    }

    if(college){
        cout<<" ____    ___    _       _       _____    ____   _____ "<<endl;
        cout<<"/ ___|  / _ \\  | |     | |     | ____|  / ___| | ____|"<<endl;
        cout<<"| |    | | | | | |     | |     |  _|   | |  _  |  _|  "<<endl;
        cout<<"| |___ | |_| | | |___  | |___  | |___  | |_| | | |___ "<<endl;
        cout<<"\\____|  \\___/  |_____| |_____| |_____|  \\____| |_____|"<<endl;
        cout<<endl;
                                                        
    }
}

#endif