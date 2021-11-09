// College (name, location,(inherit->>placements),students)
#ifndef COLLEGE_H
#define COLLEGE_H
#include<iostream>
#include<vector>
#include "Placement.h"
using namespace std;


// #include"Placements.h"

#ifndef COLLEGE_H
#define COLLEGE_H

class College{
    string college_name;
    string college_location;
    vector <string> college_companies;
    int index=1;
    vector <Placement> p;
    int students;

    public:

        College(string _college_name, string _college_location, int _students){
            college_name=_college_name;
            college_location=_college_location;
            students=_students;
            college_companies.push_back("Google"); 
            college_companies.push_back("RedHat"); 
            college_companies.push_back("Uber"); 
            college_companies.push_back("IBM"); 
            college_companies.push_back("Flipkart"); 
        }

        string get_name(){
            return college_name;
        }

        string get_location(){
            return college_location;
        }
    void add_placement_stats()
    {
        double average;
        double highest;
        int year,total_placed,total_appeared;
        cout<<"enter the year of which you want to enter the placement stats: ";cin>>year;
        cout<<"enter the average salary of all the students placed in year "<<year<<": ";cin>>average;
        cout<<"enter the highest package offered in the year "<<year<<": ";cin>>highest;
        cout<<"enter the total number of candidates placed in year "<<year<<": ";cin>>total_placed;
        cout<<"enter the total number of candidates appeared in year "<<year<<": ";cin>>total_appeared;
        Placement *current_stat=new Placement(average,highest,year,total_placed, total_appeared);
        p.push_back(*current_stat);
    }
    void delete_placement_stat()
    {
        int year;
        cout<<"enter the year of which you want to delete the placement stat: ";
        cin>>year;
       for(int i=0;i<p.size();i++)
       {
        if(p[i].year==year)
        {
            for(int j=i;j<p.size()-1;j++)
            {
                p[j]=p[j+1];
            }
        }   
        }
        cout<<"deleted the placement stat of the year "<<year<<" successfully"<<endl;
    }
    void show_placement_stat()
    {
        int year;
        cout<<"enter the year of which you want to see the placement stat: ";
        cin>>year;
        for(int i=0;i<p.size();i++)
        {
            if(p[i].year==year)
            {
                cout<<"average salary\thighest package offered\ttotal number of candidates occured\ttotal number of candidates placed"<<endl;
                cout<<p[i].average<<"LPA\t      "<<p[i].highest<<"LPA\t\t    "<<p[i].total_appeared<<"\t\t      "<<p[i].total_placed<<endl;
            }
        }
    }
          // List of companies which have visited college 
        void append_companies(){

            string newcompany;
            cout<<"enter the company name: ";getline(cin,newcompany);
            college_companies.push_back(newcompany);
            cout<<"added new companyin records"<<endl;

        }
        struct less_than_key
        {
        inline bool operator() (const Placement& struct1, const Placement& struct2)
         {
             return (struct1.year < struct2.year);
         }
        };
       
        void placement_history()
        {
            sort(p.begin(), p.end(), less_than_key());
            for(int i = p.size()-1; i>=0;i--)
            {
                cout<<"YEAR "<<p[i].year<<endl;
                // display_line(2);
                //@vedratan
                cout<<"average salary\thighest package offered\ttotal number of candidates occured\ttotal number of candidates placed"<<endl;
                cout<<p[i].average<<"LPA\t      "<<p[i].highest<<"LPA\t\t    "<<p[i].total_appeared<<"\t\t      "<<p[i].total_placed<<endl;
            }
        }
        friend ostream& operator<<(ostream&out,College& college);
};

ostream& operator<<(ostream&out,College& college){
    cout<<"\t || COLLEGE DETAILS ||"<<endl;
    
    cout<<"Serial No."<<college.index++<<endl;
    cout<<"College Name"<<college.college_name<<endl;
    cout<<"Location"<<college.college_location<<endl;
    cout<<"Companies that visited "<<college.college_name<<": "<<endl;
    int sr_no=1;
    for (auto item:college.college_companies){
        cout<<sr_no++<<". "<<item<<endl;
    }
}
#endif

