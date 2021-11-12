#include <bits/stdc++.h>
#include "./Program.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
    
    private:
        string roll_number;
        string name;
        int age;
        string college;
        string course;
        int course_duration;
        double cgpa;
        int program_count;
        vector <Program*> programs;
    public:
        Student(string _roll_number, string _name, int _age, string _college, string _course, int _course_duration, double _cgpa, int _program_count,Program *p)
        {
            roll_number = _roll_number;
            name = _name;
            age = _age;
            college = _college;
            course = _course;
            course_duration = _course_duration;
            cgpa = _cgpa;
            program_count = _program_count;
            programs.push_back(p);
        }
    void set_roll_number(string _roll_number)
    {
        roll_number = _roll_number;
    }
    void set_name(string _name)
    {
        name = _name;
    }
    void set_college(string _college)
    {
        college = _college;
    }
    void set_course(string _course)
    {
        course = _course;
    }
    void set_age(int _age)
    {
        age = _age;
    }
    void set_course_duration(int _course_duration)
    {
        course_duration = _course_duration;
    }
    void set_program_count(int _program_count)
    {
        program_count = _program_count;
    }
    void set_cgpa(double _cgpa)
    {
        cgpa = _cgpa;
    }

    string get_roll_number()
    {
        return roll_number;
    }
    string get_name()
    {
        return name;
    }
    string get_college()
    {
        return college;
    }
    string get_course()
    {
        return course;
    }
    int get_age()
    {
        return age;
    }
    int get_course_duration()
    {
        return course_duration;
    }
    int get_program_count()
    {
        return program_count;
    }
    double get_cgpa()
    {
        return cgpa;
    }

    void add_programmes()
    {

        bool flag = true;
        string name, type; 
        int seats,duration ;
        char c;
        cout << "  Enter the program details which you want to add:" << endl;

        while (flag)
        {
            cout << "  Enter the program name: ";
            cin >> name;
            cout << "  Enter the program type: ";
            cin >> type;
            cout << "  Enter total number of seats available: ";
            cin >> seats;
            cout << "  Enter the duration of programme: ";
            cin >> duration;
            cout << "  Do you want to add more programs? (y/n): ";
            cin >> c;
            Program *prog = new Program(name,type,seats,duration);
            programs.push_back(prog);
            if (c == 'n')
            {
                flag = false;
            }
        }
    }

    void show_program()
    {
        cout<<endl<<"\t\t\t\t\t\t|| PROGRAM DETAILS ||\n"<<endl;
        cout<<"\t\t================================================================================================="<<endl<<endl;
        cout << "\t\t|   Program Name\t|\tProgram Type\t|\tTotal Seats\t|    Program Duration   |" << endl;
         cout<<"\t\t-------------------------------------------------------------------------------------------------"<<endl;
        for (int i = 0; i < programs.size(); i++)
        {
            cout <<"\t\t       "<< programs[i]->name << "\t\t\t      " << programs[i]->type << "\t\t  ";
            cout << programs[i]->seats << "\t\t\t    ";
            cout << programs[i]->duration << endl;
        }
    }

    friend void delete_student(vector<Student> &student, string roll);
    friend ostream &operator<<(ostream &out, Student &);
    friend bool operator>(Student &, Student &);
    friend void display_students(vector<Student> &Students);
};

ostream &operator<<(ostream &out, Student &student)
{
    out<<"\t\t\t=================================================================="<<endl;
    out << "\t\t\t\t\t\t|| STUDENT DETAILS ||" << endl<<endl;
    out << "  Name: " << student.name << endl;
    out << "  Roll Number: " << student.roll_number << endl;
    out << "  College: " << student.college << endl;
    out << "  Course: " << student.course << endl;
    out << "  Course Duration: " << student.course_duration << endl;
    out << "  CGPA: " << student.cgpa << endl;
    out << "  Number of programs enrolled: " << student.program_count << endl;
    return out;
}

bool operator>(Student &student1, Student &student2)
{

    //Compare on basis of CGPA
    if (student1.cgpa > student2.cgpa)
    {
        return true;
    }
    else if (student1.cgpa < student2.cgpa)
    {
        return false;
    }

    //Compare on number of programs enrolled
    if (student1.program_count > student2.program_count)
    {
        return true;
    }
    else if (student1.program_count < student2.program_count)
    {
        return false;
    }

    //Compare on the basis of course duration
    if (student1.course_duration < student2.course_duration)
    {
        return true;
    }
    else if (student1.course_duration > student2.course_duration)
    {
        return false;
    }

    //Compare on the basis of age
    if (student1.age > student2.age)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void delete_student(vector<Student> &programs, string roll)
{
    for (int i = 0; i < programs.size(); i++)
    {
        if (programs[i].roll_number == roll)
        {
            for (int j = i; j < programs.size() - 1; j++)
            {
                programs[j] = programs[j + 1];
            }
        }
    }
    cout << "  Deleted the records of student successfully" << endl;
}

#endif
