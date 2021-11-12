#ifndef DISPLAY_H
#define DISPLAY_H

#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Classes/Job.h"
#include "../Classes/College.h"
using namespace std;

void display_line(int choice)
{
    switch (choice)
    {
    case 1:
        cout<<"\t\t\t=================================================================="<<endl;
        break;
    case 2:
        cout << "-------------------------------------------------------------------------------------------------------" << endl;
        break;
    default:
        cout << "===========================================" << endl;
    }
}

void display_students(vector<Student> &Students)
{
    cout << "\t\t\t\t\t  || LIST OF STUDENTS ||\n"
         << endl;
    cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Roll Number"
         << "\t|";
    cout << endl;
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;

    int index = 1;
    for (auto student : Students)
    {   cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << student.name << "\t|";
        cout.width(10);
        cout << student.roll_number << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
     cout<<"\n\n";
}

void display_companies(vector<Company> &Companies)
{
    cout << "\t\t\t\t\t  || LIST OF COMPANIES ||\n"
         << endl;
    cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
    cout << "\t\t\t\t-------------------------------------------------" << endl;

    int index = 1;
    for (auto company : Companies)
    {   cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << company.get_name() << "\t|";
        cout.width(10);
        cout << company.get_location() << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
    cout<<"\n\n";
}

void display_college_list(vector<College> &Colleges)
{
    cout << "\t\t\t\t\t  || LIST OF COLLEGE ||\n"
         << endl;
     cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
     cout << "\t\t\t\t-------------------------------------------------" << endl;

    int index = 1;
    for (auto college : Colleges)
    {   
        cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << college.get_name() << "\t|";
        cout.width(10);
        cout << college.get_location() << "\t|";
        cout << endl;
    }
    cout << endl;
    display_line(1);
     cout<<"\n\n";
}

void display_role_text(int student, int company, int college)
{
    if (student)
    {
        cout << "\t\t\t     _____  ______   __  __    ____     ______    _   __  ______" << endl;
        cout << "\t\t\t    / ___/ /_  __/  / / / /   / __ \\   / ____/   / | / / /_  __/" << endl;
        cout << "\t\t\t    \\__ \\   / /    / / / /   / / / /  / __/     /  |/ /   / /   " << endl;
        cout << "\t\t\t   ___/ /  / /    / /_/ /   / /_/ /  / /___    / /|  /   / /    " << endl;
        cout << "\t\t\t  /____/  /_/     \\____/   /_____/  /_____/   /_/ |_/   /_/     " << endl;
        cout<<"\n\t\t\t==================================================================\n";
        cout << endl;
    }

    if (company)
    {
        cout << "\t\t\t   ______   ____     __  ___    ____     ___     _   ____  __" << endl;
        cout << "\t\t\t  / ____/  / __ \\   /  |/  /   / __ \\   /   |   / | / /\\ \\/ /" << endl;
        cout << "\t\t\t / /      / / / /  / /|_/ /   / /_/ /  / /| |  /  |/ /  \\  / " << endl;
        cout << "\t\t\t/ /___   / /_/ /  / /  / /   / ____/  / ___ | / /|  /   / /  " << endl;
        cout << "\t\t\t\\____/   \\____/  /_/  /_/   /_/      /_/  |_|/_/ |_/   /_/   " << endl;
        cout<<"\n\t\t\t==================================================================\n";
        cout << endl;
    }

    if (college)
    {
        cout << "\t\t\t   ______   ____     __     __     ______   ______    ______" << endl;
        cout << "\t\t\t  / ____/  / __ \\   / /    / /    / ____/  / ____/   / ____/" << endl;
        cout << "\t\t\t / /      / / / /  / /    / /    / __/    / / __    / __/   " << endl;
        cout << "\t\t\t/ /___   / /_/ /  / /___ / /___ / /___   / /_/ /   / /___   " << endl;
        cout << "\t\t\t\\____/   \\____/  /_____//_____//_____/   \\____/   /_____/   " << endl;
        cout<<"\n\t\t\t==================================================================\n";

        cout << endl;
    }
}

void display_project_name()
{
    cout<<"\n\n\n\n";
    cout << "\t\t\t||==============================================================================================||"<<endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout << "\t\t\t||\t      %%%%%   %%       %%%%    %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%  %%%%%%    \t||" << endl;
    cout << "\t\t\t||\t      %%  %%  %%      %%  %%  %%  %%  %%      %%% %%%  %%      %%% %%    %%     \t||" << endl;
    cout << "\t\t\t||\t      %%%%%   %%      %%%%%%  %%      %%%%    %% % %%  %%%%    %% %%%    %%     \t||" << endl;
    cout << "\t\t\t||\t      %%      %%      %%  %%  %%  %%  %%      %%   %%  %%      %%  %%    %%     \t||" << endl;
    cout << "\t\t\t||\t      %%      %%%%%%  %%  %%   %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%    %%     \t||" << endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;

    cout << "\t\t\t||\t%%   %%   %%%%   %%  %%   %%%%    %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%  %%%%%%  \t||" << endl;
    cout << "\t\t\t||\t%%% %%%  %%  %%  %%% %%  %%  %%  %%      %%      %%% %%%  %%      %%% %%    %%    \t||" << endl;
    cout << "\t\t\t||\t%% % %%  %%%%%%  %% %%%  %%%%%%  %% %%%  %%%%    %% % %%  %%%%    %%%%%%    %%    \t||" << endl;
    cout << "\t\t\t||\t%%   %%  %%  %%  %%  %%  %%  %%  %%  %%  %%      %%   %%  %%      %%  %%    %%    \t||" << endl;
    cout << "\t\t\t||\t%%   %%  %%  %%  %%  %%  %%  %%   %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%    %%    \t||" << endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;

    cout << "\t\t\t||\t\t\t  %%%%   %%  %%   %%%%   %%%%%%  %%%%%%  %%   %%\t\t\t||" << endl;
    cout << "\t\t\t||\t\t\t %%       %%%%   %%        %%    %%      %%% %%%\t\t\t||" << endl;
    cout << "\t\t\t||\t\t\t  %%%%     %%     %%%%     %%    %%%%    %% % %%\t\t\t||" << endl;
    cout << "\t\t\t||\t\t\t     %%    %%        %%    %%    %%      %%   %%\t\t\t||" << endl;
    cout << "\t\t\t||\t\t\t  %%%%     %%     %%%%     %%    %%%%%%  %%   %%\t\t\t||" << endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout << "\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout << "\t\t\t||==============================================================================================||"<<endl;
}

void display_thank_you(){
     cout<<"\n\n\t\t\t************************************************************************"<<endl;
     cout<<"\t\t\t*\t\t\t\t\t\t\t\t       *"<<endl;
     cout<<"\t\t\t*\t\t\t\t\t\t\t\t       *"<<endl;
    cout<<"\t\t\t*   _____   _   _      _      _   _   _  __   __   __   ___    _   _   *"<<endl;
    cout<<"\t\t\t*  |_   _| | | | |    / \\    | \\ | | | |/ /   \\ \\ / /  / _ \\  | | | |  *"<<endl;
    cout<<"\t\t\t*    | |   | |_| |   / _ \\   |  \\| | | ' /     \\ V /  | | | | | | | |  *"<<endl;
    cout<<"\t\t\t*    | |   |  _  |  / ___ \\  | |\\  | |   \\      | |   | |_| | | |_| |  *"<<endl;
    cout<<"\t\t\t*    |_|   |_| |_| /_/   \\_\\ |_| \\_| |_|\\_\\     |_|    \\___/   \\___/   *"<<endl;
    cout<<"\t\t\t*\t\t\t\t\t\t\t\t       *"<<endl;
    cout<<"\t\t\t*\t\t\t\t\t\t\t\t       *"<<endl;
    cout<<"\t\t\t************************************************************************\n\n";
                                                                   
}

#endif
