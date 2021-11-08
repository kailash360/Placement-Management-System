#include <bits/stdc++.h>
using namespace std;
#include "../Classes/Student.h"

#ifndef FILE_H
#define FILE_H

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

void read_file(vector<Student> &students){
    
    fstream fin,fout;
    string line;

    //Read data of students
    fin.open("./Data/Student.csv");
    while(!fin.eof()){
        fin>>line;
        tokenize_student(line,students);
    }
    fin.close();
}

#endif