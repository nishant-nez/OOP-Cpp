#include <iostream>
#include "Rectangle.h"

using namespace std;



int main() {
	
	
	Rectangle rect1;
//	int len, brd;
//	
//	cout << "Enter length of rectangle: ";
//	cin >> len;
//	
//	cout << "Enter breadth of rectangle: ";
//	cin >> brd;
	
//	Rectangle rect2(len, brd);
	Rectangle rect2(23, 32);
	
	rect1.setLength(22);
	rect1.setBreadth(33);
	
	Rectangle rect3 = rect2;	//default copy constructor
	
//	rect2.setLength(3);
//	rect2.setBreadth(20);
	
	cout << "The length of the rectangle1 is : " << rect1.getLength() << endl;
	cout << "The breadth of the rectangl1e is : " << rect1.getBreadth() << endl;
	cout << "the area of the rectangle1 is : " << rect1.calcArea() << endl;
	
	cout << "The length of the rectangle2 is : " << rect2.getLength() << endl;
	cout << "The breadth of the rectangle2 is : " << rect2.getBreadth() << endl;
	cout << "the area of the rectangle2 is : " << rect2.calcArea() << endl;
	
	cout << "The length of the rectangle3 is : " << rect3.getLength() << endl;
	cout << "The breadth of the rectangle3 is : " << rect3.getBreadth() << endl;
	cout << "the area of the rectangle3 is : " << rect3.calcArea() << endl;
	
	return 0;
}