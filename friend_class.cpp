#include<iostream>
using namespace std;

class alpha
{
    friend class beta;

    private:
        int data1;

    public:
        alpha() : data1(99) {}
            
};

class beta {
    private:
        int data2;

    public: 
        void func1(alpha a) { 
            cout << "data1 = " << a.data1 << endl; 
        }

        
};

int main()
{
    alpha a;
    beta b;
    b.func1(a);

    return 0;
}

