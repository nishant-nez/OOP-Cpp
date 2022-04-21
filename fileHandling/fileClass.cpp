#include<iostream>
#include<fstream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {}
        Rectangle(int l, int b):length(l), breadth(b) {}

        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
};

int main() {
    Rectangle r1(60, 11);
    ofstream objfile("classfile.dat", ios::binary);
    objfile.write(reinterpret_cast<char*>(&r1), sizeof(r1));
}