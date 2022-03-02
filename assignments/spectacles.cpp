#include <iostream>
#include <iomanip>
#include "spectacles.h"
using namespace std;

int main()
{
    string lc,fm;
    int p;
    float pwr;

    Spectacles spect1;

    cout << "Enter the color of lens: ";
    cin >> lc;
    cout<<"Enter the material of frame: ";
    cin>>fm;
    cout << "Enter price: ";
    cin >> p;
    cout<<"Enter power of lens: ";
    cin>>pwr;

    Spectacles spect2(lc,fm,p,pwr);

    cout << "\n";

    cout<<"The details of spectacle1 are:-"<<endl;
    cout << "The lens color of spectacle1 is: " << spect1.getlensColor() << endl;
    cout << "The frame material of spectacle1 is: " << spect1.getframeMaterial() << endl;
    cout << "The price of spectacle1 is: " << spect1.getprice() << endl;
    cout << "The power of spectacle1 is: " << spect1.getpower() << endl;
    cout << "The focal length of spectacle1 is: " << spect1.calcFocalLength()<<endl;

    float temp1;
    temp1=spect1.calcFocalLength();

   if (temp1>0)
    {
        cout<<"The person using spectacle1 is diagnosed with Hypermetropia or far-sightedness."<<endl;
        cout<<"The person is using convex lens."<<endl;
    }
    else if (temp1<0)
    {
        cout<<"The person using spectacle1 is diagnosed with Myopia or short-sightedness."<<endl;
        cout<<"The person is using concave lens."<<endl;
    }
    else
    {
        cout<<"The person using spectacle1 has healthy eyes. "<<endl;
    }

    cout << "\n";

    float temp2;
    temp2=spect2.calcFocalLength();

    cout<<"The details of spectacle2 are:-"<<endl;
    cout << "The lens color of spectacle2 is: " << spect2.getlensColor() << endl;
    cout << "The frame material of spectacle2 is: " << spect2.getframeMaterial() << endl;
    cout << "The price of spectacle2 is: " << spect2.getprice() << endl;
    cout << "The power of spectacle2 is: " << spect2.getpower() << endl;
    cout << "The focal length of spectacle2 is: " << spect2.calcFocalLength()<<endl;

    if (temp2>0)
    {
        cout<<"The person using spectacle2 is diagnosed with Hypermetropia or far-sightedness"<<endl;
        cout<<"The person is using convex lens."<<endl;
    }
    else if (temp2<0)
    {
        cout<<"The person using spectacle2 is diagnosed with Myopia or short-sightedness"<<endl;
        cout<<"The person is using concave lens."<<endl;
    }
    else
    {
        cout<<"The person using spectacle2 has healthy eyes. "<<endl;
    }
    
    if (spect1>spect2)
        cout<< "Spect1 is more expensive."<<endl;
    else  
        cout<< "Spect2 is more expensive."<<endl;

    ++spect1;
    cout<<"\n";
    cout<<"The details of modified spectacle1 are:-"<<endl;
    cout << "The lens color of spectacle1 is: " << spect1.getlensColor() << endl;
    cout << "The frame material of spectacle1 is: " << spect1.getframeMaterial() << endl;
    cout << "The price of spectacle1 is: " << spect1.getprice() << endl;
    cout << "The power of spectacle1 is: " << spect1.getpower() << endl;
    cout << "The focal length of spectacle1 is: " << spect1.calcFocalLength()<<endl<<endl;

    NewSpectacles newSpec("Blue", "Plastic", 5000, 2, "RayBan", 9);

    cout << "The details of NEW spectacles are:-" << endl;
    cout << "The lens color of NEW spectacle is: " << newSpec.getlensColor() << endl;
    cout << "The frame material of NEW spectacle is: " << newSpec.getframeMaterial() << endl;
    cout << "The price of NEW spectacle is: " << newSpec.getprice() << endl;
    cout << "The power of NEW spectacle is: " << newSpec.getpower() << endl;
    cout << "The focal length of NEW spectacle is: " << newSpec.calcFocalLength() << endl;
    cout << "The radius of NEW spectacle is: " << newSpec.calcRadius() << endl << endl;
}