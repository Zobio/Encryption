#include "fileRead.cpp"

int main(){
    text t=readFile("test.txt");
    for(int i=0;i<t.size();i++)cout<<t[i]<<endl;
}