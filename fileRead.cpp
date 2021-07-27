#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

using text=vector<string>;

text readFile(string fileName){
    ifstream f;
    f.open(fileName,ios::in);
    string value;
    text lines;
    while(!f.eof()){
        getline(f,value);
        lines.push_back(value);
    }
    
    text words;
    for(int i=0;i<lines.size();i++){
        istringstream iss(lines[i]);
        string s;
        while(iss >> s)words.push_back(s);
    }
    f.close();
    return words;
}
