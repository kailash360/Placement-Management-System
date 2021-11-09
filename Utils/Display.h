#ifndef DISPLAY_H
#define DISPLAY_H

#include "../Classes/Company.h"
using namespace std;

void display_companies(vector<Company>&);
void display_line(int);


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

void display_jobs(vector <Job>& jobs) {
    cout<<"\t  || LIST OF JOBS ||\n"<<endl;
    cout.width(5);
    cout<<"Serial No."<<"|";
    cout.width(12);
    cout<<"Location"<<"\t|";
    cout.width(10);
    cout<<"Type"<<"   \t|";
    cout.width(10);
    cout<<"Role"<<"\t|";
    cout<<endl;
    display_line(2);

    int index = 1;
    for(auto job: jobs){
        cout.width(5);
        cout<<index++<<" \t  |";
        cout.width(15);
        cout<<job.get_location()<<"\t|";
        cout.width(10);
        cout<<job.get_type()<<"\t|";
        cout.width(10);
        cout<<job.get_role()<<"\t|";
        cout<<endl;
    }
    cout<<"\n"<<endl;
    display_line(1);
}

void display_line(int choice){
    switch(choice){
        case 1: 
            cout<<"==================================================="<<endl;
            break;
        case 2: 
            cout<<"---------------------------------------------------"<<endl;
            break;
        default: 
            cout<<"==========================================="<<endl;

    }
}


#endif