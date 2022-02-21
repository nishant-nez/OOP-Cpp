#include <iostream>
using namespace std;

class Rectangle 
{
	private:
		int length;
		int breadth;
	public:
		//constructor (no arg){khali cha}
		Rectangle() :length(5), breadth(5)
		{ }
		
		//constructor (two args){int,int}
		Rectangle(int len, int brd ) : length(len), breadth(brd)
		{ }
		
		void setLength(int l) {length = l;}
		int getLength() {return length;}
		void setBreadth(int b) {breadth = b;}
		int getBreadth() {return breadth;} 
			
		long calcArea();

};

long Rectangle::calcArea()
{
return length * breadth;
}

int main()
{
	int l,b;
	Rectangle rec1(10, 5); //two-arg constructor
	
	cout << "Enter length:"<<endl;
	cin >> l;
	cout << "Enter breadth:"<<endl;
	cin >> b;
	
	Rectangle rec2(l,b); //arg constructor
	Rectangle rec3 = rec1; //one-arg constructor
	
	cout << "\narea1 ="<< rec1.calcArea();
	cout << "\narea2 = "<<rec2.calcArea();
	cout << "\narea3 ="<< rec3.calcArea();
	cout << endl;
	return 0;
}
