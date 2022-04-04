#include<iostream>
using namespace std;
#define p 3
#define q 3

template<class T>
// void swap(T *x, T *y) {
//     T temp = *x;
//     *x = *y;
//     *y = temp;
// }

void swap(T& x, T& y) {
    T temp = x;
    x=y;
    y=temp;
}

template <class T, class T2> 
T arrSum(T arr[], T2 n) {
    T sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

template <class T>
void matRead(T* arr) {
    cout << "\n\nEnter matrix elements : \n" << endl;
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            cout << "Enter element : ";
            cin >> *(*(arr+i)+j);
        }
    }
}



// template <class T>
// T matMul(T ar1[][], T ar2[][], int p, int q, int r, int s) {
//     return 0;
// }

int main() 
{
    int a,b,c;

    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    cout << endl << "Value before swapping : " << endl;
    cout << "a: " << a << endl << "b: " << b<<endl;
    // swap(&a,&b);
    ::swap(a, b);
    cout << "Value before swapping : " << endl;
    cout << "a: " << a << endl << "b: " << b<<endl;

    cout << endl << "Enter your array size : ";
    cin >> c;
    int arr[c];
    cout << "Enter array elements : " << endl;
    for(int i=0; i<c; i++) {
        cin >> arr[i];
    }
    cout << endl << "Sum of array : " << arrSum(arr, c) << endl;

    int  matA[p][q];
    int matB[p][q];

    matRead(matA);
    matRead(matB);





}