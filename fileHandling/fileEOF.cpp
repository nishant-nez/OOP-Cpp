#include<iostream>
#include<fstream>
#define MAX 80
using namespace std;


int main()
{
    char buffer[MAX];
    ifstream infile("data2.txt");
    while(!infile.eof()) {
        infile.getline(buffer, MAX);
        cout << buffer << endl;
    }
}