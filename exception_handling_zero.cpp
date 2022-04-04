#include<iostream>
using namespace std;

long divide(int n1, int n2) {
    if(n2==0)
        throw "Divided by zero";
    else
        return n1/n2;
}

int main() {
    long result;
    try{
        result=divide(5,0);
        cout<<result<<endl;
    } catch(const char *msg) {
        cout << msg;
    }
}