#include <iostream>
using namespace std;


// MULTILEVEL INHERITANCE A,B,C
class A
{
    protected:
        int one;

    public:
        void func()
        {
            cout << "I am class A" << endl;
        }
};

class B : public A
{
    protected:
        int two;

    public:
        void func()
        {
            cout << "I am class B" << endl;
        }
};

class C : public B
{
    protected:
        int three;

    public:
        void func()
        {
            cout << "I am class C" << endl;
        }
};


// MULTIPLE INHERITANCE D,E,F,G

class D
{
    protected:
        int four;

    public:
        void funcM()
        {
            cout << "I am class D" << endl;
        }
};

class E {
    protected:
        int five;

    public:
        void funcM()
        {
            cout << "I am class E" << endl;
        }
};

class F {
    protected:
        int six;

    public:
        void funcM()
        {
            cout << "I am class F" << endl;
        }
};

class G : public D, public E, public F {

    protected:
        int seven;

    public:
        void funcM()
        {
            cout << "I am class G" << endl;
        }
};


// MULTIPPATH INHERITANCE

class H {
    protected:
        int eight;

    public:
        void funcMP() {
            cout << "I am class H" << endl;
        }
};

class I : public H
{
protected:
    int nine;

public:
    void funcMP()
    {
        cout << "I am class I" << endl;
    }
};

class J : public H
{
protected:
    int ten;

public:
    void funcMP()
    {
        cout << "I am class J" << endl;
    }
};

class K : public I, public J
{
protected:
    int eleven;

public:
    void funcMP()
    {
        cout << "I am class K" << endl;
    }
};



int main()
{
    C obj;
    G obj1;
    K obj2;

    obj.func();
    obj1.funcM();
    obj2.funcMP();

    return 0;
}