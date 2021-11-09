#include <bits/stdc++.h>
#include "Job.h"
#include "Internship.h"
using namespace std;

#ifndef COMPANY_H
#define COMPANY_H

class Company{
    protected:
        string company_name;
        string company_location;
        /*Branch here shows which branch of collegee will company target Eg: Mech, Elec, CSE*/
        string company_branch;
        int total_offers;
        vector<Job>jobs;
        vector<Internship>internships;
    public:
        Company(string _company_name, string _company_location, string _company_branch,vector<Job>& _jobs,vector <Internship>& _internships,int _total_offers = 0){
            company_name=_company_name;
            company_location=_company_location;
            company_branch=_company_branch;
            total_offers=_total_offers;
            jobs=_jobs;
            internships = _internships;
        }

        void set_location(string _company_location){
            company_location = _company_location;
        }

        string get_name(){
            return company_name;
        }

        string get_location(){
            return company_location;
        }

        string get_branch(){
            return company_branch;
        }

        int get_total_offers(){
            return total_offers;
        }

        void append_job(){
            int _amount;
            string _location;
            string _type;
            string _role;
            int _required_experience;
            cout << "Enter the salary that will provided:\n";
            cin >> _amount;
            cout << "Enter location:\n";
            cin >> _location;
            cout << "Type of job remote/on-site:\n";
            cin >> _type;
            cout << "Enter the required experience\n";
            cin >> _required_experience;
            cout << "Enter the role at the company\n";
            cin >> _role;
            Job newJob(_amount, _location, _type, _required_experience, _role);
            jobs.push_back(newJob);
        }

        void append_internship(){
            int _amount;
            string _location;
            string _type;
            string _role;
            int _program_count;
            cout << "Enter the salary that will provided:\n";
            cin >> _amount;
            cout << "Enter location:\n";
            cin >> _location;
            cout << "Type of job remote/on-site:\n";
            cin >> _type;
            cout << "Enter the role at the company\n";
            cin >> _role;
            cout << "Enter the number of programs of student\n";
            cin >> _program_count;
            Internship new_internship(_amount, _location, _type, _role, _program_count);
            internships.push_back(new_internship);
        }

        void delete_job(){
            int index;
            display_job();
            cout << "Enter the serial number of the job you wish to delete: ";
            cin >> index;
            jobs.erase(jobs.begin() + (index - 1));
        }

        void delete_intership(){
            int index;
            display_internship();
            cout << "Enter the serial number of the internship you wish to delete: ";
            cin >> index;
            internships.erase(internships.begin() + (index - 1));
        }

        void update_job_salary(){
            int index, _salary;
            display_job();
            cout << "Enter the serial number of the job whose salary you wish to update:";
            cin >> index;
            cout << "Enter the new salary";
            cin >> _salary;
            jobs[index-1].set_amount(_salary);
        }

        void update_internship_salary(){
            int index, _salary;
            display_job();
            cout << "Enter the serial number of the internship whose salary you wish to update:";
            cin >> index;
            cout << "Enter the new salary";
            cin >> _salary;
            internships[index-1].set_amount(_salary);
        }

        void display_internship(){
            int index;
            cout << "Location\tType\t\tRole\n";
            for (int i = 0; i <internships.size(); i++){
                cout << (internships[i]).get_location() << "\t" << internships[i].get_type() << "\t" << internships[i].get_role();
            }
            cout << "Enter the serial number of the internship you wish to see in detail and 0 if you wish to skip";
            cin >> index;
            if (index){
                cout << (internships[index - 1]);
            }
        }

        void display_job(){
            int index;
            cout << "Location\tType\t\tRole\n";
            for (int index = 0; index < jobs.size(); index++){
                cout << jobs[index].get_location() << "\t" << jobs[index].get_type() << "\t" << jobs[index].get_role();
            }
            cout << "Enter serial number of the internship you wish to see in detail and 0 if you wish to skip";
            cin >> index;
            if (index){
                cout << jobs[index - 1];
            }
        }

        friend ostream& operator <<(ostream& out,Company& company);    
        friend void display_companies(vector<Company> &Companies);
};

ostream& operator<<(ostream& out,Company& company){
    out<<"\t || COMPANY DETAILS ||\n"<<endl;
    out<<"Name: "<<company.get_name()<<endl;
    out<<"Location: "<<company.get_location()<<endl;
    out<<"Branch Preferred: "<<company.get_branch()<<endl;
    out<<"Total Offers made: "<<company.get_total_offers()<<endl;

}

#endif