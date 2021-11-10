#ifndef PLACEMENT_H
#define PLACEMENT_H

#include <bits/stdc++.h>
using namespace std;
class Placement
{
    double average;
    double highest;

    int year,total_placed,total_appeared;
    public: 
    Placement(int year,double average, int highest,int total_placed, int total_appeared){
        this->average = average;
        this->highest = highest;
        this->year = year;
        this->total_placed = total_placed;
        this->total_appeared = total_appeared;
    }

    void set_average(double _average)
    {
        average = _average;
    }

    void set_highest(double _highest)
    {
        highest = _highest;
    }

    void set_year(int _year)
    {
        year = _year;
    }

    void set_total_placed(int _total_placed)
    {
        total_placed = _total_placed;
    }

    void set_total_appeared(int _total_appeared)
    {
        total_appeared = _total_appeared;
    }

    double get_average()
    {
        return average;
    }

    double get_highest()
    {
        return highest;
    }

    int get_total_placed()
    {
        return total_placed;
    }

    int get_total_appeared()
    {
        return total_appeared;
    }

    int get_year()
    {
        return year;
    }

    void percentage_placed()
    {
        double per = (total_placed / total_appeared) * 100;
        cout << "Percentage of Students Placed: " << per << endl;
    }

    friend ostream &operator<<(ostream &out, Placement &p);
    friend class College;
};
ostream &operator<<(ostream &out, Placement &p)
{
    out << "\t|| STUDENT DETAILS ||" << endl;
    out << "Highest Package: " << p.highest << endl;
    out << "Overall Average Package: " << p.average << endl;
    out << "Total Number of Students Occurred: " << p.total_appeared << endl;
    return out;
}

#endif