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
        Student(string _roll_number,string _name,int _age,string _college,string _course,int _course_duration,double _cgpa,int _program_count){
            roll_number = _roll_number;
            name = _name;
            age=_age;
            college = _college;
            course = _course;
            course_duration = _course_duration;
            cgpa = _cgpa;
            program_count = _program_count;
        }


        void add_programmes(){

            bool flag=true;
            char c;
            Program *prog=new Program();
            cout<<"Enter the program details which you want to add:"<<endl;
            
            while(flag){
                cout<<"Enter the program name: ";
                cin>>prog->name;
                cout<<"Enter the program type: ";
                cin>>prog->type;
                cout<<"Enter total number of seats available: ";
                cin>>prog->seats;
                cout<<"Enter the duration of programme: ";
                cin>>prog->duration;
                cout<<"Do you want to add more programs? (y/n): ";
                cin>>c;
                programs.push_back(prog);
                if(c=='n'){
                    flag=false;
                }
            }
        }

        void show_program(){
            
            cout<<"The program details are as follows:-"<<endl;
            cout<<"Program Name\tProgram Type\tTotal Seats\tProgram Duration"<<endl;
            for(int i=0;i<programs.size();i++)
            {
                cout<<programs[i]->name<<"\t     "<<programs[i]->type<<"\t     ";
                cout<<programs[i]->seats<<"\t      ";
                cout<<programs[i]->duration<<endl;
            }
        }
        
        friend void delete_student(vector <Student>& student,string roll);
        friend ostream& operator<<(ostream& out,Student&);
        friend bool operator > (Student&,Student&);
        friend void display_students(vector <Student>& Students);
};

ostream& operator<<(ostream& out,Student& student){
    cout<<"\t|| STUDENT DETAILS ||"<<endl;
    cout<<"Name: "<<student.name<<endl;
    cout<<"Roll Number: "<<student.roll_number<<endl;
    cout<<"College: "<<student.college<<endl;
    cout<<"Course: "<<student.course<<endl;
    cout<<"Course Duration: "<<student.course_duration<<endl;
    cout<<"CGPA: "<<student.cgpa<<endl;
    cout<<"Number of programs enrolled: "<<student.program_count<<endl;
}

bool operator > (Student& student1,Student& student2){

    //Compare on basis of CGPA
    if(student1.cgpa > student2.cgpa){
        return true;
    }else if(student1.cgpa < student2.cgpa){
        return false;
    }

     //Compare on number of programs enrolled
    if(student1.program_count > student2.program_count){
        return true;
    }else if(student1.program_count < student2.program_count){
        return false;
    }

    //Compare on the basis of course duration
    if(student1.course_duration < student2.course_duration){
        return true;
    }else if(student1.course_duration > student2.course_duration){
        return false;
    }

    //Compare on the basis of age
    if(student1.age > student2.age){
        return true;
    }else{
        return false;
    }
}
void delete_student(vector <Student> &programs, string roll){
    for(int i=0;i<programs.size();i++){
        if(programs[i].roll_number==roll){
            for(int j=i;j<programs.size()-1;j++){
                programs[j]=programs[j+1];
            }
        }   
    }
    cout<<"Deleted the records of student successfully"<<endl;
}

#endif