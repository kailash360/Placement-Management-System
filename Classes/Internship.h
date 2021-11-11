#include "Job.h"
#ifndef INTERNSHIP_H
#define INTERNSHIP_H

class Internship : public Job
{
private:
    int program_count;

public:
    Internship(int _amount, string _location, string _type, string _role, int _program_count)
    {
        amount = _amount;
        location = _location;
        type = _type;
        role = _role;
        program_count = _program_count;
    }

    void set_program_count(int _program_count)
    {
        program_count = _program_count;
    }

    int get_program_count()
    {
        return program_count;
    }

    friend class Company;
    friend ostream &operator<<(ostream &out, Internship &internship);
};

ostream &operator<<(ostream &out, Internship &internship)
{
    out << "\t\t\t\t\t|| INTERNSHIP DETAILS ||" << endl;
    out << "  Amount: " << internship.amount << endl;
    out << "  Location: " << internship.location << endl;
    out << "  Type: " << internship.type << endl;
    out << "  Role: " << internship.role << endl;
    out << "  Program Count: " << internship.program_count << endl;
    return out;
}

#endif
