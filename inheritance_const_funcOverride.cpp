#include<iostream>
#include<string>

using namespace std;

class Rectangle {
	protected:
		int length;
		int breadth;
		
	public:
		Rectangle() {}
		Rectangle(int l, int b) : length(l), breadth(b) {}
		
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
		AdvRectangle() {}
		AdvRectangle(int l, int b, int bw, string col) : Rectangle(l, b), borderWidth(b), borderColor(col) {}
		AdvRectangle(int bw) : borderWidth(bw) {}

		
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
		
		// Function Override
		long calcArea() {
			if (length<0 || breadth<0) {
				return 0;
			}
			else {
				return Rectangle::calcArea();
			}
		}
};


int main() {
	AdvRectangle rect1;
	rect1.setLength(10);
	rect1.setBreadth(20);
	
	rect1.calcArea();
	rect1.calcPerimeter();
	
	cout << "Perimiter : " << rect1.calcPerimeter() << endl;
	
	AdvRectangle rect2(20, 15, 11, "purple");
	
	if(rect2.calcArea()==0) {
		cout << "Invalid" << endl;
	}
	else {
		cout << "Area : " << rect2.calcArea() << endl;
	}
	
	return 0;
}
