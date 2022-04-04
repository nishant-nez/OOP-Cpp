#include<iostream>
using namespace std;

class NegativeException {
    public:
    string prop;
    int value;

    NegativeException(string p, int v):prop(p), value(v) {}
};

class LargeNumberException {
    public:
    string pmpt;
    int val;

    LargeNumberException(string p, int v):pmpt(p), val(v) {}
};

class Rectangle {
    private:
        int length, breadth;
    public:
    Rectangle(){}
    Rectangle(int len, int brd):length(len), breadth(brd) {}

    void setLength(int L) {
        if(L<0)
            throw NegativeException("Length", L);
        else if(L>1000)
            throw LargeNumberException("Length", L);
        else
            length=L;
    }
};

int main() {
    Rectangle r1;

    try {
        r1.setLength(-9);
    } catch(NegativeException ne) {
        cout << ne.prop << " cannot be negative (value = " << ne.value << ")" << endl;
       
    }

    try {
        r1.setLength(2000);

        } catch(LargeNumberException ln)  {
            cout << "large" <<endl;
        }
}
