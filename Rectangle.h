//#ifndef CLASS_AND_OBJECT_RACTANGLE_H
#define CLASS_AND_OBJECT_RECTANGLE_H
#include<iostream>
using namespace std;

class Rectangle {
	private:
		int length;
		int breadth;	//data members
		
	public:
		//constructors
		Rectangle(): length(5), breadth(10)
		{
			std::cout << "Object created with the default length and breadth values " << std::endl;
		}
		
		Rectangle(int len, int brd): length(len), breadth(brd)
		{
			std::cout << "Object created with parameterized constructor" << endl;
		}
		
		~Rectangle()
		{
			cout << this->length << endl;
			cout << "Object being destroyed.." << endl << endl;
		}
		//member functions
		void setLength(int len) {length = len;}
		int getLength() {return length;}
		void setBreadth(int brd) {breadth = brd;}
		int getBreadth() {return breadth;}
		
		//behaviour of the rectangle
		long calcArea();
//		{
//			return length * breadth;
//		}
};

long Rectangle::calcArea() {
	return length * breadth;
}