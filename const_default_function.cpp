// Write a C++ program that implements functions with const argument and default argument.

#include<iostream>

using namespace std;

// DEFAULT ARGUMENT (lin)
void printLine(string ln, string lin=".END.") {
    cout<<ln<<lin<<endl;
}

// CONSTANT ARGUMENT
void display(string ant, const int val2, const int val = 1048) {
    cout<<ant<<" "<<val2<<" "<<val;
}

int main() {
    printLine("This is a line");
    display("Roll:", 1017);
}