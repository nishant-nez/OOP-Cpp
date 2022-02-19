#include <iostream>

using namespace std;

class Distance {
	private:
		int feet;
		int inches;
	
	public:
		Distance(){}
		Distance(int f, int i):feet(f), inches(i){}
		
		Distance(float dist){
			feet = int(dist);
			inches = (dist - feet) * 12; 
		}
		operator float(){
			return feet+(inches/12.0);
		}
		
		void Display(){
			cout << feet << "ft " <<inches<<"inch"<<endl;
		}
};


int main(){
	Distance d1;
	
	d1 = 10.5f;
	d1.Display();
	
	Distance d2(10, 6);
	float f = d2;
	cout << f;
	
	return 0;
}