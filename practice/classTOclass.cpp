#include <iostream>
using namespace std;

class Minute
{
    private:
        int mns;

    public:
        Minute() {}
        Minute(int m) : mns(m) {}
        void show()
        {
            cout << mns << "minutes.";
        }
};
class Hour
{
    private:
        int hrs;
        int mns;

    public:
        Hour() {}
        Hour(int h, int m) : hrs(h), mns(m) {}
        operator Minute()
        {
            int m = hrs * 60 + mns;
            Minute minute(m);
            return minute;
        }
};

int main()
{
    Hour h1(1, 30);
    Minute minute;
    minute = h1;
    minute.show();
    
}