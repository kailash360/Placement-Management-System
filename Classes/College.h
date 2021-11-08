// College (name, location,(inherit->>placements),students)
#include<iostream>
#include<vector>
using namespace std;

// #include"Placements.h"

class College{
    string college_name;
    string college_location;
    vector <string> college_branch;
    vector <string> college_companies;
    int students;
    // vector <Placements> placements;

    public:

        College(string _college_name, string _college_location, int _students){
            college_name=_college_name;
            college_location=_college_location;
            students=_students;
        }

        void get_values(){
            cout<<"college Name- "<<college_name<<endl;
            cout<<"college Location- "<<college_location<<endl;
            cout<<"Number of students- "<<students<<endl;
            cout<<"List of companies visiting college- "<<endl;
            int sr_no=1;
            for (auto item:college_companies){
                cout<<sr_no<<"\t"<<item;
            }
        }

        // List of companies which have visited college 
        void append_companies(){

        }
};