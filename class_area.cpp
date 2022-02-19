#include <iostream>

using namespace std;

class Rectangle {
	private:
		int length;
		int breadth;	//data members
		
	public:
		
		//member functions
		void setLength(int len) {length = len;}
		int getLength() {return length;}
		void setBreadth(int brd) {breadth = brd;}
		int getBreadth() {return breadth;}
		
		//behaviour of the rectangle
		long calcArea()
		{
			return length*breadth;
		}
};

int main() {
	
	
	Rectangle rect1, rect2;
	int len, brd;
	
	cout << "Enter length of rectangle: ";
	cin >> len;
	
	cout << "Enter breadth of rectangle: ";
	cin >> brd;
	
	rect1.setLength(len);
	rect1.setBreadth(brd);
	
//	rect2.setLength(3);
//	rect2.setBreadth(20);
	
	cout << "The length of the rectangle is : " << rect1.getLength() << endl;
	cout << "the area of the rectangle is : " << rect1.calcArea() << endl;
	
	return 0;
}