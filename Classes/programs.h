#include <iostream>

using namespace std;

class Program{
    private:
        string program_name, type, seats;
        int duration;

    public:
        Program(string _program_name, int _duration, string _type)
        {
            program_name = _program_name;
            duration = _duration;
            type = _type;
        }
        void get_program_name()
        {
            cout << program_name << endl;
        }
        void get_duration()
        {
            cout << duration << endl;
        }
        void get_type()
        {
            cout << type << endl;
        }
        void set_seats()
        {
            cin >> seats;
        }
        friend class Student;
};
