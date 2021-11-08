#include <bits/stdc++.h>
#include "Internship.h"
using namespace std;

class Company{
    string company_name;
    string company_location;
    /*Branch here shows which branch of collegee will company target Eg: Mech, Elec, CSE*/
    string company_branch;
    int total_offers;
    vector<Job>jobs;
    vector<Internship>internships;
public:
    Company(string _company_name, string _company_location, string _company_branch){
        company_name=_company_name;
        company_location=_company_location;
        company_branch=_company_branch;
        total_offers=0;
    }

    void set_location(string company_location){
        this->company_location=company_location;
    }

    void get_values()
    {
        cout << "Company Name- " << company_name << endl;
        cout << "Company Location- " << company_location << endl;
        cout << "Company Branch- " << company_branch << endl;
    }

    void append_job()
    {
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

    void append_internship()
    {
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

    void delete_job()
    {
        int index;
        display_job();
        cout << "Enter the Sr No. of job you wish to delete";
        cin >> index;
        jobs.erase(jobs.begin() + (index - 1));
    }

    void delete_intership()
    {
        int index;
        display_internship();
        cout << "Enter the Sr No. of internship you wish to delete";
        cin >> index;
        internships.erase(internships.begin() + (index - 1));
    }

    void update_job_salary()
    {
        int index, _salary;
        display_job();
        cout << "Enter the Sr No. of job whos salary you wish to update";
        cin >> index;
        cout << "Enter the new salary";
        cin >> _salary;
        jobs[index-1].amount = _salary;
    }

    void update_internship_salary()
    {
        int index, _salary;
        display_job();
        cout << "Enter the Sr No. of internship whos salary you wish to update";
        cin >> index;
        cout << "Enter the new salary";
        cin >> _salary;
        internships[index-1].amount=_salary;
    }

        void display_internship()
        {
            int index;
            cout << "Location\tType\t\tRole\n";
            for (int i = 0; i <internships.size(); i++)
            {
                cout << (internships[i]).location << "\t" << internships[i].type << "\t" << internships[i].role;
            }
            cout << "Enter Sr No. of internship you wish to see in detail and 0 if you wish to skip";
            cin >> index;
            if (index)
            {
                cout << (internships[index - 1]);
            }
        }
        void display_job()
    {
        int index;
        cout << "Location\tType\t\tRole\n";
        for (int index = 0; index < jobs.size(); index++)
        {
            cout << jobs[index].location << "\t" << jobs[index].type << "\t" << jobs[index].role;
        }
        cout << "Enter Sr No. of internship you wish to see in detail and 0 if you wish to skip";
        cin >> index;
        if (index)
        {
            cout << (jobs[index - 1]);
        }
    }    
};
