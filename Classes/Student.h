#include <iostream>
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

        friend ostream operator<<(ostream& out,Student&);
        friend bool operator > (Student&,Student&);
};

ostream operator<<(ostream& out,Student& student){
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


#endif