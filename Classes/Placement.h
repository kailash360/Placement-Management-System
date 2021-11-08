#include<bits/stdc++.h>
using namespace std;
class Placement
{
    double average;
    double highest;
    int year,total_placed,total_appeared,year;
    Placement(int average,double highest, int year)
    {
        this->average = average;
        this->highest = highest;
        this->year= year;
    }
 friend ostream operator<<(ostream& out,Placement& p);
};
ostream operator<<(ostream& out,Placement &p){
    cout<<"\t|| STUDENT DETAILS ||"<<endl;
    cout<<"Highest Package: "<<p.highest<<endl;
    cout<<"Overall Average Package: "<<p.average<<endl;
    cout<<"Total Number of Students Occurred: "<<p.total_appeared<<endl;
}