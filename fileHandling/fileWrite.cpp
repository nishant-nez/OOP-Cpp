#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char ch = 'A';
    int i=77;
    double db = 5.06;
    string st1 = "Deerwalk";
    string st2 = "College";
    
    ofstream outfile("data.txt");

    outfile << ch << ' ' << db << 'A' << i << ' ' << st1 << ' ' << st2;
    cout << "File written successfully!" << endl;
}