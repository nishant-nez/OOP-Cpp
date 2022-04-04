#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char ch;
    int i;
    double db;
    string st1;
    string st2;
    
    ifstream infile("data.txt");

    infile >> ch >> i >> db >> st1 >> st2;
    cout << "File read successfully!" << endl;
    cout << ch << endl << i << endl << db << endl << st1 << endl << st2 << endl;
}