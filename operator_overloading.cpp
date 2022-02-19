#include<iostream>
using namespace std;

class Rectangle {
	private:
		int length;
		int breadth;
		
	public:
		Rectangle() : length(15), breadth(11) {}
		Rectangle(int len, int brd): length(len), breadth(brd) {}
		
		void setLength(int len) {length = len;}
		int getLength() {return length;}
		void setBreadth(int brd) {breadth = brd;}
		int getBreadth() {return breadth;}
		
		long calcArea()
		{
			return length * breadth;
		}
		
		Rectangle operator ++();
		// postfix:
		Rectangle operator ++(int);
		bool operator >(Rectangle);
		int operator +(Rectangle);
};

Rectangle Rectangle::operator ++() {
	Rectangle temp;
	temp.setLength(++length);
	temp.setBreadth(++breadth);
	return temp;
}

Rectangle Rectangle::operator ++(int) {
	return Rectangle(++length, ++breadth);
}
		
bool Rectangle::operator >(Rectangle rect) {
	return calcArea() > rect.calcArea();
}

int Rectangle::operator +(Rectangle rect) {
	return length + rect.length;
}

int main() {
	Rectangle r1(10, 25);
	Rectangle r2(50, 11);
	
	r1 = ++r2;
	
	cout << "Length of r1 : " << r1.getLength() << endl;
	cout << "Breadth of r1 : " << r1.getBreadth() << endl;
	cout << "Length of r2 : " << r2.getLength() << endl;
	cout << "Breadth of r2 : " << r2.getBreadth() << endl;
	
	if(r1>r2) {
		cout << "First Rectangle is larger."<<endl;
	}
	else {
		cout << "Second Rectangle is larger." << endl;
	}
	
	cout << "Sum of lengths : " << r1+r2 << endl;
	
	return 0;
}