#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {}
        Rectangle(int len, int brd):length(len), breadth(brd) {};
        
        void getAddress() {
            cout << "My address is : " << this << endl;
        }

        void setLength(int length) {
            this->length = length;
        }
        int getLength() {
            return length;
        }

};

int main() {
    Rectangle r1, r2;
    Rectangle r3(5, 4);

    r1.getAddress();
    r2.getAddress();

    r3.setLength(9);
    cout << r3.getLength();
}