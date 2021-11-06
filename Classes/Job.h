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

        friend ostream operator <<(ostream&, Job&);
};

ostream operator<<(ostream& out, Job& job){
    out<<"|| JOB DETAILS ||"<<endl;
    out<<"Role: "<<job.role<<endl;
    out<<"Amount: "<<job.amount<<endl;
    out<<"Location: "<<job.location<<endl;
    out<<"Type: "<<job.type<<endl;
    out<<"Required Experience: "<<job.required_experience<<endl;
}

#endif