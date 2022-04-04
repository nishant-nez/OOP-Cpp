#include<iostream>

using namespace std;

template<class T>

void func(T num)
{
    cout<<"The result of generalized function is :"<<num<< endl;

}

template<>
void func(float num)
{
    cout<<"The result of specialized template for float:"<<num<<endl;
}

template<class T>

class Value{
    public:
    Value()
    {
        cout<<" This is General Value"<<endl;
    }

};

template<>
class Value <float>
{
    public:
    Value(){
        cout<<"this is specialized value"<<endl;
    }
};

int main()
{
    func(78);
    func(6.5);

    // Value<int>;
    // Value<float>;

}
