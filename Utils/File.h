#ifndef FILE_H
#define FILE_H
#include <bits/stdc++.h>
using namespace std;
#include "../Classes/Student.h"
#include "../Classes/Company.cpp"
#include "../Classes/College.h"


void tokenize_student(string s,vector<Student> &data){
    
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
    Student* student = new Student(row[0],row[1],stoi(row[2]),row[3],row[4],stoi(row[5]),stod(row[6]),stoi(row[7]));
    data.push_back(*student);
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

    //Push the tokens to the data
    Company* company = new Company(row[0],row[1],row[2]);
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
    
    fstream fin,fout;
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