/*
 *
 * Program : To convert Nepali Rupees to US Dollars and cents and vice versa
 * Author : Nishant Khadka
 * Date : 18/02/2022
 *
 *
 */

#include<iostream>
using namespace std;

class CurrencyConversion{
	private:
		int dollar;
		int cents;
		
	public:
		CurrencyConversion() {}
		CurrencyConversion(int d, int c) : dollar(d), cents(c) {}
		
		CurrencyConversion(float npr) {
			dollar = int(npr)/120;
			cents = (int)npr % 120 + (npr - (int)npr)/120 * 100;
		}
		
		operator float() {
			return 120.0*dollar + (120.0*cents)/100.0;
		}
		
		void display() {
			cout << dollar << " dollars " << cents << " cents." << endl;
		}
};
 
int main() {
	float value;
	int dlr;
	int cnt;
	CurrencyConversion npr;
	
	cout << "Enter the amount in NPR : ";
	cin >> value;
	
	npr = value;
	cout << "Nepali Rupees " << value << " in US Dollar is : ";
	npr.display();
	
	
	cout << "\nEnter dollar value : ";
	cin >> dlr;
	cout << "Enter cents value : ";
	cin >> cnt;
	
	CurrencyConversion usd(dlr, cnt);
	float toNPR = usd;
	cout << dlr << " dollars " << cnt << " cents is : " << toNPR << " NPR" << endl;
	
	return 0;
}
 