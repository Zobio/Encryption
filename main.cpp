#include "changer1.cpp"
#include "fileRead.cpp"
#include "fileWrite.cpp"

using namespace std;

int main()
{   
	string inputName = "";
	cout << "The name of input file is ...";
	cin >> inputName;
    text t = readFile(inputName);
    text result = changeWord(t);

	string outputName = "";
	cout << "The name of output file is ...";
	cin >> outputName;
	
	writeFile(outputName, result);

	cout << "Output successfully finished!" << endl;
}