#ifndef FILE_H
#define FILE_H
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
#include "../Classes/Student.h"
#include "../Classes/Company.h"
#include "../Classes/College.h"
#include "../Classes/Job.h"
#include "../Classes/Internship.h"
#include "../Classes/Program.h"

void tokenize_student(string s,vector<Student> &data){

    // Vector of string to save tokens
    vector <string> row;
      
    // stringstream class check1
    stringstream check1(s);
      
    string intermediate;
      vector <Program*> dummy;
      dummy.push_back(new Program("MLSA","Paid", 25, 6));
      dummy.push_back(new Program("GSoC","Paid", 20, 6));
      dummy.push_back(new Program("HacktoberFest","Unpaid", 150, 1));
      dummy.push_back(new Program("GWOC","Unpaid", 150, 1));
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Push the tokens to the data

    Student* student = new Student(row[0],row[1],stoi(row[2]),row[3],row[4],stoi(row[5]),stod(row[6]),stoi(row[7]),dummy[rand() % dummy.size()]);
    data.push_back(*student);
}

void tokenize_job(string s,vector<Job> &data){
    // Vector of string to save tokens
    vector <string> row;
      
    // stringstream class check1
    stringstream check1(s);
    string intermediate;
      
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Push the tokens to the data
    Job* job = new Job(stoi(row[0]),row[1],row[2],stoi(row[3]),row[4]);
    data.push_back(*job);
}

void tokenize_internship(string s,vector<Internship> &data){
    // Vector of string to save tokens
    vector <string> row;
      
    // stringstream class check1
    stringstream check1(s);
    string intermediate;
      
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Push the tokens to the data
    Internship* internship = new Internship(stoi(row[0]),row[1],row[2],row[3],stoi(row[4]));
    data.push_back(*internship);
}

void tokenize_company(string s,vector<Company> &data){
    
    // Vector of string to save tokens
    vector <string> row;
      
    // stringstream class check1
    stringstream check1(s);
      
    string intermediate;
      
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Read the file of jobs
    vector <Job> jobs;
    fstream fin2;
    fin2.open("./Data/Job.csv");
    while(!fin2.eof()){
        fin2>>intermediate;
        tokenize_job(intermediate,jobs);
    }
    fin2.close();

    //Read the file of internships
    vector <Internship> internships;
    fin2.open("./Data/Internship.csv");
    while(!fin2.eof()){
        fin2>>intermediate;
        tokenize_internship(intermediate,internships);
    }
    fin2.close();

    //Push the tokens to the data
    Company* company = new Company(row[0],row[1],row[2],jobs,internships);
    data.push_back(*company);
}

void tokenize_college(string s,vector<College> &data){
    
    // Vector of string to save tokens
    vector <string> row;
      
    // stringstream class check1
    stringstream check1(s);
      
    string intermediate;
      
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Push the tokens to the data
    College* college = new College(row[0],row[1],stoi(row[2]));
    data.push_back(*college);
}

void read_file(vector<Student> &students,vector<Company> &companies,vector<College> &colleges){
    
    ifstream fin;
    string line;

    //Read data of students
    fin.open("./Data/Student.csv");
    while(!fin.eof()){
        fin>>line;
        tokenize_student(line,students);
    }
    fin.close();

    //Read data of companies
    fin.open("./Data/Company.csv");
    while(!fin.eof()){
        fin>>line;
        tokenize_company(line,companies);
    }
    fin.close();

    //Read data of colleges
    fin.open("./Data/College.csv");
    while(!fin.eof()){
        fin>>line;
        tokenize_college(line,colleges);
    }
    fin.close();
}

#endif