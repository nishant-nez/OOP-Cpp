#include<iostream>
using namespace std;

template <class T>
T amax(T arr[], int n) {
    T high=0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; i<n; j++) {
            if(arr[j]>arr[i]) {
                high = arr[j];
            }
        }
    }
    return 123;
}

int main() {
    int arr[5] {89, 45, 77, 2, 4};
    // cout << "test";
    cout << "The greatest array element : ";
    cout << amax(arr, 5);
}