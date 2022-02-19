#include <iostream>
#include <iomanip>
//#define pi = 22.7
using namespace std;
float pi=22.7;
class utensil
{
    private:
        float  volume;
        float radius;
        float height;
        int price;
        bool colourchanging;

    public:
        utensil() : radius(4.1), height(12), price (800), colourchanging() {}
        utensil( float r, float h, int p , bool cc) :  radius(r), height(h), price(p) ,colourchanging(cc) {}
        
         
        void setRadius(float r) {radius=r; }
        void setHeight(float h) { height=h; }
        void setPrice (int p)    {price=p;}
        void setColourchanging(float cc) { colourchanging=cc; }

        float getRadius() { return radius; }
        float getHeight() { return height; }
        int   getprice()  {return price;}
        bool getColourchanging() {return colourchanging; }
        
        float calcvolume()
        {
            return (pi*radius*radius*height);
        }
    
};
int main()
{

         float r,h,p;
         bool cc;
         string t;
         
   
        cout << "Enter the radius: ";
             cin >> r;
         cout<<"Enter the height: ";
             cin>>h;
       cout <<"enter the price:";
             cin>>p;
        cout <<"is it color changing? (y/n)";
        cin>>t;
        if(t=="y")
        {
        	cc=true;
		}
		else {
			cc=false;
		}
           
	 utensil mug(r,h,p,cc);
    utensil bottle(55.5,89.9,1500,true); 
	
	cout << "\n";
        
cout<<"The details of Mug are:-"<<endl;
    cout << "The raduis of mug is: " << mug.getRadius() << endl;
    cout << "The height of mug is: " << mug.getHeight() << endl;
    cout << "The price of mug is: " << mug.getprice() << endl;
    cout << "The volume of mug is: " << mug.calcvolume() << endl;
    
     float temp1;
    temp1=mug.calcvolume();

   if (mug.getColourchanging()==false)
    {
    	cout<<"the mug doesnot change colour."<<endl;
    }
    
    else
    {
        cout<<"The mug changes colour. "<<endl;
    }

    cout << "\n";
    
    
    float temp2;
    temp2=bottle.calcvolume();
    
    cout<<"The details of bottle are:-"<<endl;
    cout << "The raduis of bottle is: " << bottle.getRadius() << endl;
    cout << "The height of bottle is: " << bottle.getHeight() << endl;
    cout << "The price of bottle is: " << bottle.getprice() << endl;
    cout << "The volume of bottle is: " << bottle.calcvolume() << endl;

   
    if (bottle.getColourchanging()==false)
    {
        cout<<"The bottle changes colour"<<endl;
        
    }
    else
    {
        cout<<"the bottle doesnot change colour "<<endl;
  
    }
}
        