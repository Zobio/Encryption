#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

using text=vector<string>;

void writeFile(string fileName, text message){
    ofstream f;
    f.open(fileName, ios::out);
    for(auto m : message) {
        f << m + " ";
    }
    return;
}
