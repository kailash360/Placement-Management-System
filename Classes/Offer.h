#include <iostream>
using namespace std;

#ifndef OFFER_H
#define OFFER_H

class Offer{
    protected:
        int amount; 
        string location;
        string type;
    public:
        Offer(int _amount, string _location, string _type){
            amount = _amount;
            location = _location;
            type = _type;
        }

        void setAmount(int _amount){
            amount = _amount;
        }

        void setLocation(string _location){
            location = _location;
        }

        void setType(string _type){
            type = _type;
        }
};

#endif