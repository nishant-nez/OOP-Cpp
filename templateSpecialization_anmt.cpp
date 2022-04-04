#include<iostream>
using namespace std;

template<class T>
T greatest(T arr[], int range) {
    T temp=0;
    for(int i=0; i<range; i++) {
        for(int j=i+1; j<range-1; j++) {
            if(arr[j]>arr[i]) {
                temp = arr[j];
            }
        }
    }
    return temp;
}

template<>
char greatest<char>(char carr[], int range) {
    char temp='n';
    int temp1;
    int temp2;
    for(int i; i<range; i++) {
        for(int j=i+1; j<range-1; j++) {
            // temp1=(int)carr[j];
            // temp2=(int)carr[i];
            temp1=int(carr[j]);
            temp2=int(carr[i]);
            if(temp1 > temp2) {
                temp = carr[j];
                cout<<"hello";
            }
        }
    }
    return temp;
}

int main() {
    char carr[5] = {'H', 'U', 'T', 'B', 'Q'};
    int iarr[3] = {4, 12, 0};
    cout <<"test";

    cout << "Greatest integer : " << greatest<int>(iarr, 3) << endl;
    cout << "Character with greatest ASCII value : " << greatest<char>(carr, 5) << endl;
    cout << (int)carr[1];
}
