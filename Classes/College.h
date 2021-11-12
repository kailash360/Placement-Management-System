// College (name, location,(inherit->>placements),students)
#ifndef COLLEGE_H
#define COLLEGE_H
#include <iostream>
#include <vector>
#include "Placement.h"
using namespace std;
class College
{
    string college_name;
    string college_location;
    vector<string> college_companies;
    int index = 1;
    vector<Placement> placements;
    int students;

public:
    College(string _college_name, string _college_location, int _students)
    {
        college_name = _college_name;
        college_location = _college_location;
        students = _students;
         college_companies.push_back("Google"); 
            college_companies.push_back("RedHat"); 
            college_companies.push_back("Uber"); 
            college_companies.push_back("IBM"); 
            college_companies.push_back("Flipkart");
            placements.push_back(Placement(2018,10,42,1950,2000)); 
            placements.push_back(Placement(2019,11,50,1700,1800)); 
            placements.push_back(Placement(2020,10,42,1900,2200)); 
    }
        // void initialise_companies(vector <string> &college_companies) {
        //     college_companies.push_back("Google"); 
        //     college_companies.push_back("RedHat"); 
        //     college_companies.push_back("Uber"); 
        //     college_companies.push_back("IBM"); 
        //     college_companies.push_back("Flipkart");
        // }
        void initialise_placements(vector <Placement> &placements) {
            placements.push_back(Placement(2018,10,42,1950,2000)); 
            placements.push_back(Placement(2019,11,50,1700,1800)); 
            placements.push_back(Placement(2020,10,42,1900,2200)); 
        }
        string get_name(){
            return college_name;
        }
    //functions to set individual variables
    void set_name(string _college_name)
    {
        college_name = _college_name;
    }

    void set_location(string _college_location)
    {
        college_location = _college_location;
    }

    void set_students(int _students)
    {
        students = _students;
    }

    //functions to get individual variables
    int get_students()
    {
        return students;
    }

    string get_location()
    {
        return college_location;
    }

    void add_placement_stats()
    {
        double average;
        double highest;
        int year, total_placed, total_appeared;
        cout << "  Enter the year of which you want to enter the placement stats: ";
        cin >> year;
        cout << "  Enter the average salary of all the students placed in year " << year << ": ";
        cin >> average;
        cout << "  Enter the highest package offered in the year " << year << ": ";
        cin >> highest;
        cout << "  Enter the total number of candidates placed in year " << year << ": ";
        cin >> total_placed;
        cout << "  Enter the total number of candidates appeared in year " << year << ": ";
        cin >> total_appeared;
        Placement *current_stat = new Placement(year, average, highest, total_placed, total_appeared);
        placements.push_back(*current_stat);
    }
    void delete_placement_stat()
    {
        int year;
        cout << "  Enter the year of which you want to delete the placement statistics: ";
        cin >> year;
        for (int i = 0; i < placements.size(); i++)
        {
            if (placements[i].year == year)
            {
                for (int j = i; j < placements.size() - 1; j++)
                {
                    placements[j] = placements[j + 1];
                }
            }
        }
        cout << "Deleted the placement stat of the year " << year << " successfully" << endl;
    }
    void show_placement_stat()
    {
        int year;
        cout << "Enter the year of which you want to see the placement stat: ";
        cin >> year;
        cout<<"\n\n\t\t======================================================================================================="<<endl<<endl; 
        cout<<"\t\t\t\t\t\t\t || PLACEMENT STAT ||\n"<<endl;
                cout<<"\t\t======================================================================================================="<<endl<<endl;
        for (int i = 0; i < placements.size(); i++)
        {
            if (placements[i].year == year)
            {
                cout<<"\t\tAverage Salary"<<"    |    ";
                cout<<"Highest Package Offered"<<"    |    ";
                cout<<"Candidates Appeared"<<"    |";
                cout<<"\tCandidates Placed"<<"     |"<<endl<<endl;
                cout<<"\t\t-------------------------------------------------------------------------------------------------------"<<endl;
                cout<<endl;
               cout<<"\t\t"<<placements[i].average<<"LPA\t\t\t   "<<placements[i].highest<<"LPA\t\t\t "<<placements[i].total_appeared<<"\t\t\t    "<<placements[i].total_placed<<endl;            }
        }
    }
    // List of companies which have visited college
    void append_companies()
    {
        char newcompany[50];
        cout << "Enter the company name: ";
        cin>>newcompany;
        college_companies.push_back(newcompany);
        cout << "Successfully added new company in records" << endl;
    }
    void show_companies()
    {
        int index=1;
        cout<<"\t\t\t\t\t\t\t|| LIST OF COMPANIES ||"<<endl<<endl;
        cout<<"\t\t\t-------------------------------------------------------------------------------------------------------"<<endl<<endl;
        for(int i=0;i<college_companies.size();i++)
        {
            cout<<"\t\t\t"<<index++<<". "<<college_companies[i]<<endl;
        }
    }
    struct less_than_key
    {
        inline bool operator()(const Placement &struct1, const Placement &struct2)
        {
            return (struct1.year < struct2.year);
        }
    };

    void placement_history()
    {
        //initialise_placements(placements);
        sort(placements.begin(), placements.end(), less_than_key());
        cout<<endl<<"\t\t\t\t\t      || PLACEMENT HISTORY ||\n"<<endl;
                cout<<"\t======================================================================================================================"<<endl<<endl;
        cout<<"\t|  YEAR"<<"    |    ";
                cout<<"Average Salary"<<"    |    ";
                cout<<"Highest Package Offered"<<"    |    ";
                cout<<"Candidates Appeared"<<"    |";
                cout<<"\tCandidates Placed"<<"     |"<<endl<<endl;
                cout<<"\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<endl;
        for (int i = placements.size() - 1; i >= 0; i--)
        {
              
            cout<<"\t   "<<placements[i].year<<"\t\t  "<<placements[i].average<<" LPA\t\t\t  "<<placements[i].highest<<" LPA\t\t\t  "<<placements[i].total_appeared<<"\t\t\t    "<<placements[i].total_placed<<endl;
               
        }
        cout<<endl;
    }
    friend ostream &operator<<(ostream &out, College &college);
};


ostream& operator<<(ostream&out,College& college){
    cout<<"\t\t\t\t\t   || COLLEGE DETAILS ||"<<endl;
    // college.initialise_companies(college.college_companies);
    out<<"  Serial No."<<college.index++<<endl;
    out<<"  College Name: "<<college.college_name<<endl;
    out<<"  Location: "<<college.college_location<<endl;
    out<<"  Companies that visited: "<<college.college_name<<": "<<endl;
    int sr_no=1;
    for (auto item:college.college_companies){
        cout<<"   "<<sr_no++<<". "<<item<<endl;
    }
    return out;
}
#endif
