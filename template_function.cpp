#include<iostream>
using namespace std;

template <class T>
T maxNum(T n1, T n2) {
    return n1>n2?n1:n2;
}

template <class T, class T2> 
int findVal(T arr[], T value, T2 n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == value) {
            return i+1;
        }
    }
    return -1;
}

template <class T>
T readVal() {
    T val;
    cout << "Enter value ";
    cin >> val;
    return val;
}

int main() {
    int ival=5, ival2=10;
    float fval=10.5, fval2=11.22;

    cout <<"Largest integer is : "<<maxNum(ival, ival2)<<endl;
    cout <<"Largest integer is : "<<maxNum(fval, fval2)<<endl;

    float farray[5] = {1.1, 2.3, 5.6, 6.9, 8.8};
    int iarray[5] = {3,9,5,7,55};
    cout<<"The position of the value is "<< findVal(farray, 3.0F, 5) <<endl;
    cout<<"The position of the value is "<< findVal(iarray, 3, 5) <<endl;

    ival = readVal<int> ();
    fval = readVal<float>();

}