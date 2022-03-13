#include<iostream>
using namespace std;

class Base {
    public:
        // virtual void show() = 0;

        virtual void show() {
            cout << "Base Class" << endl;
        }

        // void show() {
        //     cout << "Base Class" << endl;
        // }
};

class Derv1 : public Base {
    public:
        void show() {
            cout << "Derived class 1" << endl;
        }
};

class Derv2 : public Base {
    public: 
        void show() {
            cout << "Derived class 2" << endl;
        }
};

int main() {
    Derv1 objD1;
    Derv2 objD2;
    Base *ptr;
    ptr = &objD1;
    ptr -> show();
    ptr = &objD2;
    ptr -> show();
}