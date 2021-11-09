#include <iostream>
using namespace std;

#ifndef PROGRAM_H
#define PROGRAM_H

class Program{
    private:
        string name, type;
        int duration, seats;

    public:
        // Program(string _program_name, int _duration, string _type)
        // {
        //     program_name = _program_name;
        //     duration = _duration;
        //     type = _type;
        // }
        string get_name(){
            cout << name << endl;
        }
        int get_duration(){
            return duration;
        }
        string get_type(){
            return type;
        }
        int get_seats(){
            return seats;
        }
        void set_seats(int _seats){
            seats = _seats;
        }
        friend class Student;
};

#endif