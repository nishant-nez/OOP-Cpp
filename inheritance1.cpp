#include<iostream>
#include<string>

using namespace std;

class Rectangle {
	protected:
		int length;
		int breadth;
		
	public:
		
		void setLength(int l) {
			length = l;
		}
		void setBreadth(int b) {
			breadth = b;
		}
		int getLength() {
			return length;
		}
		int getBreadth() {
			return breadth;
		}
		
		long calcArea() {
			return length*breadth;
		}
};

class AdvRectangle : public Rectangle {
	private:
		int borderWidth;
		string borderColor;
		
	public:
		
		void setborderWidth(int width) {
			borderWidth = width;
		}
		void setborderColor(string color) {
			borderColor = color;
		}
		
		int getborderWidth() {
			return borderWidth;
		}
		string getborderColor(){
			return borderColor;
		}
		
		long calcPerimeter () {
			return 2*(length+breadth);
		}
};


int main() {
	AdvRectangle rect1;
	rect1.setLength(10);
	rect1.setBreadth(20);
	
	rect1.calcArea();
	rect1.calcPerimeter();
	
	cout << "Perimiter : " << rect1.calcPerimeter();
	
	return 0;
}
