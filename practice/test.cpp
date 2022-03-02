#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    // default constructor
    rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor
    rectangle(int _length, int _breadth)
    {
        length = _length;
        breadth = _breadth;
    }

    // copy constructor
    rectangle(rectangle &_r)
    {
        length = _r.length;
        breadth = _r.breadth;
    }
};

int main()
{
    rectangle r1;
    rectangle r2(10, 5);
    rectangle r3(r2);
}