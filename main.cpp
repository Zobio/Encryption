#include "changer1.cpp"
#include "fileRead.cpp"

int main()
{   
    text t = readFile("test.txt");
    text result = changeWord(t);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}