#include "Offer.h"

#ifndef INTERNSHIP_H
#define INTERNSHIP_H

class Internship:public Offer{
    private:
        int program_count;
    public:
        Internship(int _amount, string _location, string _type,int _program_count){
            amount = _amount;
            location = _location;
            type = _type;
            program_count = _program_count;
        }

        void display(){
            cout<<"\t|| INTERNSHIP DETAILS ||"<<endl;
            cout<<"Amount: "<<amount<<endl;
            cout<<"Location: "<<location<<endl;
            cout<<"Type: "<<type<<endl;
            cout<<"Program Count: "<<program_count<<endl;
        }

        void set_program_count(int _program_count){
            program_count = _program_count;
        }
};

#endif
