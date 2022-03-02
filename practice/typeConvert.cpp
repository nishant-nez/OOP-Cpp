/*Using the concept of conversion from basic to user-defined and from user-defined to basic types, write a
C++ program to convert a given object of time (with hour and minute as its properties) to float value and
vice versa. For example, if an object is created as 2 hours and 30 minutes, the result should be 2.5 hours.*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int mins;

public:
    Time() {}
    Time(int h, int m) : hours(h), mins(m) {}
    void display()
    {
        cout << hours << " hours " << mins << " minutes.";
    }

    Time(float clock)
    {
        hours = (int)clock;
        mins = (clock - hours) * 60;
    }

    operator float()
    {
        return hours + mins / 60.0;
    }
};

int main()
{
    Time t1;
    t1 = 2.5;
    t1.display();

    Time t2(2, 60);
    float f;
    f = t2;
    cout << "\nNew : " << f;
}