#ifndef DISPLAY_COLLEGE_H
#define DISPLAY_COLLEGE_H
#include "../Classes/College.h"
#include "../Classes/Placement.h"
void display_college1(vector<College> &Colleges){
    cout<<"\t  || LIST OF COLLEGES ||\n"<<endl;
    cout.width(5);
    cout<<"Serial No."<<"|";
    cout.width(12);
    cout<<"Name"<<"   \t|";
    cout.width(10);
    cout<<"Location"<<"\t|";
    cout<<endl;
    display_line(2);
    int index = 1;
    for(auto college :Colleges){
        college.get_values();
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
#endif