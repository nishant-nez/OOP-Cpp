#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str = "this is a line, this a continuous line.";
    ofstream outfile("data3.txt");
    for(int i=0; i<str.length(); i++)
        outfile.put(str[i]);
}