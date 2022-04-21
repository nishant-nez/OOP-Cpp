#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    char ch;
    ifstream infille("data.txt");
    while(infille) {
        infille.get(ch);
        cout<<ch;
    }
}