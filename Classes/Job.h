#include "Offer.h"

#ifndef JOB_H
#define JOB_H

class Job : public Offer
{
private:
    int required_experience;

protected:
    string role;

public:
    Job()
    {
        amount = 0;
        location = "";
        type = "";
        required_experience = 0;
        role = "";
    }
    Job(int _amount, string _location, string _type, int _required_experience, string _role)
    {
        amount = _amount;
        location = _location;
        type = _type;
        required_experience = _required_experience;
        role = _role;
    }

    void set_required_experience(int _required_experience)
    {
        required_experience = _required_experience;
    }

    void set_role(string _role)
    {
        role = _role;
    }

    int get_required_experience()
    {
        return required_experience;
    }

    string get_role()
    {
        return role;
    }

    friend class Company;
    friend ostream &operator<<(ostream &, Job &);
};

ostream &operator<<(ostream &out, Job &job)
{
    out << "\n\t\t\t\t\t|| JOB DETAILS ||\n"<< endl;
    out << " Role: " << job.role << endl;
    out << " Amount: Rs." << job.amount << endl;
    out << " Location: " << job.location << endl;
    out << " Type: " << job.type << endl;
    out << " Required Experience: " << job.required_experience << " years" << endl;
    return out;
}

#endif
