#include "Offer.h"

#ifndef JOB_H
#define JOB_H

class Job:public Offer {
    private:
        int required_experience; 
        string role;
    public:
        Job(int _amount, string _location, string _type,int _required_experience,string _role){
            amount = _amount;
            location = _location;
            type = _type;
            required_experience = _required_experience;
            role = _role;
        }

        void set_required_experience(int _required_experience) {
            required_experience = _required_experience;
        }

        void set_role(string _role) {
            role = _role;
        }
};

#endif