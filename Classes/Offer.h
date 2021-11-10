#include <iostream>
#include <vector>
using namespace std;

#ifndef OFFER_H
#define OFFER_H

class Offer
{
protected:
    int amount;
    string location;
    string type;

public:
    void set_amount(int _amount)
    {
        amount = _amount;
    }

    void set_location(string _location)
    {
        location = _location;
    }

    void set_type(string _type)
    {
        type = _type;
    }
    int get_amount()
    {
        return amount;
    }
    string get_location()
    {
        return location;
    }
    string get_type()
    {
        return type;
    }
    friend class Company;
};

#endif