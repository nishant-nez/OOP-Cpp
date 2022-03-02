// Write a program to determine the sum of the harmonic series (1 + 1/2 + 1/3 + 1/4 + ………+ 1/n) for a given value of n.

#include<iostream>
using namespace std;

float harmonic(int);

int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n;

    cout << "Sum of harmonic series till " << n << " : " << harmonic(n);

    return 0; 
}

float harmonic(int n){
    float sum=0;
    for(int i=1; i<=n; i++) {
        sum = sum + (1.0/i);
    }
    return sum;
}

