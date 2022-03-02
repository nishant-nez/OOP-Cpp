#include<iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a=b;
    b=temp;
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x=10;
    int y =20;

    // swap(x, y);
    swap2(&x, &y);

    cout << x << " & " << y;
}