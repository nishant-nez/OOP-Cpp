#include<iostream>
using namespace std;

int main()
{
    float total, amount, rate;
    int time;
    
    cout<<"Enter the TOTAL you got :";
    cin>>total;
    
    cout<<"Enter the RATE :";
    cin>>rate;
    
    cout<<"Enter PRINCIPLE :";
    cin>>amount;
    
    rate= rate/100;
    
    while(total >= amount)
    {
        amount = amount + (amount * rate );
        time++;
        
    }
    cout<<"no. of years is :"<<time<<endl;
    
        return 0;
}