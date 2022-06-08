#include<iostream>
using namespace std;

template <class T>
void search(T arr[8]) {
    for(int i=0; i<8; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int iArr[8] {1, 89, 65, 12, 0, 35, 78, 55};
    float fArr[8] {5.2, 6.9, 8.3, 1.2, 0.2, 2.7, 1.9, 5.0};
    char cArr[8] {'b', 'q', 'p', 'r', 'm', 't', 'y', 'd'};

    cout << "For int: ";
    search<int>(iArr);
    cout << endl << endl << "For float: ";
    search<float>(fArr);
    cout << endl << endl << "For char: ";
    search<char>(cArr);
}