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
    f.close();
    return lines;
}
