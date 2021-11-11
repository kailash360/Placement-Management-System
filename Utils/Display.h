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
        cout<<"=================================================================="<<endl;
        break;
    case 2:
        cout << "-------------------------------------------------------------" << endl;
        break;
    default:
        cout << "===========================================" << endl;
    }
}

void display_students(vector<Student> &Students)
{
    cout << "\t  || LIST OF STUDENTS ||\n"
         << endl;
    cout.width(5);
    cout << "Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Roll Number"
         << "\t|";
    cout << endl;
    cout<<"-------------------------------------------------"<<endl;

    int index = 1;
    for (auto student : Students)
    {
        cout.width(5);
        cout << index++ << " \t  |";
        cout.width(15);
        cout << student.name << "\t|";
        cout.width(10);
        cout << student.roll_number << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
}

void display_companies(vector<Company> &Companies)
{
    cout << "\t  || LIST OF COMPANIES ||\n"
         << endl;
    cout.width(5);
    cout << "Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
    cout << "-------------------------------------------------" << endl;

    int index = 1;
    for (auto company : Companies)
    {
        cout.width(5);
        cout << index++ << " \t  |";
        cout.width(15);
        cout << company.get_name() << "\t|";
        cout.width(10);
        cout << company.get_location() << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
}

void display_college_list(vector<College> &Colleges)
{
    cout << "\t  || LIST OF COLLEGE ||\n"
         << endl;
    cout.width(5);
    cout << "Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
     cout << "-------------------------------------------------" << endl;

    int index = 1;
    for (auto college : Colleges)
    {
        cout.width(5);
        cout << index++ << " \t  |";
        cout.width(15);
        cout << college.get_name() << "\t|";
        cout.width(10);
        cout << college.get_location() << "\t|";
        cout << endl;
    }
    cout << endl;
    display_line(1);
}

void display_role_text(int student, int company, int college)
{
    if (student)
    {
        cout << "   _____  ______   __  __    ____     ______    _   __  ______" << endl;
        cout << "  / ___/ /_  __/  / / / /   / __ \\   / ____/   / | / / /_  __/" << endl;
        cout << "  \\__ \\   / /    / / / /   / / / /  / __/     /  |/ /   / /   " << endl;
        cout << " ___/ /  / /    / /_/ /   / /_/ /  / /___    / /|  /   / /    " << endl;
        cout << "/____/  /_/     \\____/   /_____/  /_____/   /_/ |_/   /_/     " << endl;
        cout<<"\n==================================================================\n";
        cout << endl;
    }

    if (company)
    {
        cout << "   ______   ____     __  ___    ____     ___     _   ____  __" << endl;
        cout << "  / ____/  / __ \\   /  |/  /   / __ \\   /   |   / | / /\\ \\/ /" << endl;
        cout << " / /      / / / /  / /|_/ /   / /_/ /  / /| |  /  |/ /  \\  / " << endl;
        cout << "/ /___   / /_/ /  / /  / /   / ____/  / ___ | / /|  /   / /  " << endl;
        cout << "\\____/   \\____/  /_/  /_/   /_/      /_/  |_|/_/ |_/   /_/   " << endl;
        cout<<"\n==================================================================\n";
        cout << endl;
    }

    if (college)
    {
        cout << "   ______   ____     __     __     ______   ______    ______" << endl;
        cout << "  / ____/  / __ \\   / /    / /    / ____/  / ____/   / ____/" << endl;
        cout << " / /      / / / /  / /    / /    / __/    / / __    / __/   " << endl;
        cout << "/ /___   / /_/ /  / /___ / /___ / /___   / /_/ /   / /___   " << endl;
        cout << "\\____/   \\____/  /_____//_____//_____/   \\____/   /_____/   " << endl;
        cout<<"\n==================================================================\n";

        cout << endl;
    }
}

void display_project_name()
{

    cout << "%%%%%   %%       %%%%    %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%  %%%%% " << endl;
    cout << "%%  %%  %%      %%  %%  %%  %%  %%      %%% %%%  %%      %%% %%    %%   " << endl;
    cout << "%%%%%   %%      %%%%%%  %%      %%%%    %% % %%  %%%%    %% %%%    %%   " << endl;
    cout << "%%      %%      %%  %%  %%  %%  %%      %%   %%  %%      %%  %%    %%   " << endl;
    cout << "%%      %%%%%%  %%  %%   %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%    %%   " << endl;
    cout << endl;

    cout << "%%   %%   %%%%   %%  %%   %%%%    %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%  %%%%%% " << endl;
    cout << "%%% %%%  %%  %%  %%% %%  %%  %%  %%      %%      %%% %%%  %%      %%% %%    %%   " << endl;
    cout << "%% % %%  %%%%%%  %% %%%  %%%%%%  %% %%%  %%%%    %% % %%  %%%%    %%%%%     %%    " << endl;
    cout << "%%   %%  %%  %%  %%  %%  %%  %%  %%  %%  %%      %%   %%  %%      %%  %%    %%   " << endl;
    cout << "%%   %%  %%  %%  %%  %%  %%  %%   %%%%   %%%%%%  %%   %%  %%%%%%  %%  %%    %%   " << endl;
    cout << endl;

    cout << "  %%%%   %%  %%   %%%%   %%%%%%  %%%%%%  %%   %%" << endl;
    cout << " %%       %%%%   %%        %%    %%      %%% %%%" << endl;
    cout << "  %%%%     %%     %%%%     %%    %%%%    %% % %%" << endl;
    cout << "     %%    %%        %%    %%    %%      %%   %%" << endl;
    cout << "  %%%%     %%     %%%%     %%    %%%%%%  %%   %%" << endl;
    cout << endl;
}

void display_thank_you(){
    cout<<" _____   _   _      _      _   _   _  __   __   __   ___    _   _ "<<endl;
    cout<<"|_   _| | | | |    / \\    | \\ | | | |/ /   \\ \\ / /  / _ \\  | | | |"<<endl;
    cout<<"  | |   | |_| |   / _ \\   |  \\| | | ' /     \\ V /  | | | | | | | |"<<endl;
    cout<<"  | |   |  _  |  / ___ \\  | |\\  | | . \\      | |   | |_| | | |_| |"<<endl;
    cout<<"  |_|   |_| |_| /_/   \\_\\ |_| \\_| |_|\\_\\     |_|    \\___/   \\___/ \n"<<endl;
    cout<<"==================================================================\n\n";
                                                                   
}

#endif
