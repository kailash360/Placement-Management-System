#include<bits/stdc++.h>
using namespace std;
class Placement
{
    double average;
    double highest;
    int year,total_placed,total_appeared;
    Placement(int average,double highest, int year,int total_placed, int total_appeared)
    {
        this->average = average;
        this->highest = highest;
        this->year= year;
        this->total_placed = total_placed;
        this->total_appeared = total_appeared;
    }
    
void sort_placement(vector<Placement>&p1)
{
    
}
    void percentage_placed()
    {
        double per=(total_placed/total_appeared)*100;
        cout<<"Percentage of Students Placed: "<<per<<endl;
    }
    friend ostream& operator<<(ostream& out,Placement& p);
    friend class College;
};
ostream& operator<<(ostream& out,Placement &p){
    cout<<"\t|| STUDENT DETAILS ||"<<endl;
    cout<<"Highest Package: "<<p.highest<<endl;
    cout<<"Overall Average Package: "<<p.average<<endl;
    cout<<"Total Number of Students Occurred: "<<p.total_appeared<<endl;
}