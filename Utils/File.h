#include <bits/stdc++.h>
using namespace std;

void tokenize(string s,vector<vector<string>> &data)
{
    // Vector of string to save tokens
    vector <string> tokens;
      
    // stringstream class check1
    stringstream check1(s);
      
    string intermediate;
      
    // Tokenizing w.r.t. ','
    while(getline(check1, intermediate, ',')){
        tokens.push_back(intermediate);
    }

    //Push the tokens to the data
    data.push_back(tokens);
}

void read_file(string _file_name, vector<vector<string>> &data){
    
    fstream fin,fout;
    fin.open(_file_name);
    string line;
    while(!fin.eof()){
        fin>>line;
        tokenize(line,data);
    }
}

