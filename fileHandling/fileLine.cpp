#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    ofstream outfile("data2.txt");
    outfile << "This is first line\n";
    outfile << "This is second line\n";
}