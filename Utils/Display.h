#include "../Classes/Company.cpp"

#ifndef DISPLAY_H
#define DISPLAY_H

void display_companies(vector<Company> &Companies){
    cout<<"|| LIST OF COMPANIES ||"<<endl;
    cout<<"Serial No.\tName\t\tLocation"<<endl;

    int index = 1;
    for(auto company :Companies){
        cout<<"    "<<index++<<" \t\t"<<company.get_name()<<" \t "<<company.get_location()<<endl;
    }
}

#endif