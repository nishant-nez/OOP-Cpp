/*
 *
 * Program : To implement a real world Class (LightBulb) with operator overloading
 * Author : Nishant Khadka
 * Date : 18/02/2022
 *
 *
 */

#include<iostream>
using namespace std;
float rate = 8.290;

class LightBulb {
	private:
		string brand;
		float wattage;
		bool isLed;
		
	public:
//		LightBulb() {}
		// Default Constructor
		LightBulb(): brand("Philips"), wattage(60), isLed(true) {	}
		
		// Overloaded Constructor
		LightBulb(string company, float watt, bool led): brand(company), wattage(watt<0?0:watt), isLed(led) {}
				
		// Destructor
		~LightBulb() {}

		void setBrand(string company) { brand = company; }
		string getBrand() { return brand; }
		
		void setWattage(float watt) { 
			if(watt<0) {
				wattage = 0;
			}
			else {
				wattage = watt; 
			}
		}
		float getWattage() { return wattage; }
		
		void setLed(bool led) { isLed = led; } 
		bool getisLed() { return isLed;	}
		
		float calcConsumption () {
			return wattage*24/1000;
		}
		
		float calcWastage () {
			if(isLed) {	
				return 10.0/100.0*calcConsumption();
			}
			else {
				return 90.0/100.0*calcConsumption();
			}
		}
		
		float calcPrice () {
			return rate*calcConsumption();
		}
		
		// operator overloading
		LightBulb operator ++();
		int operator +(int);
		bool operator >(LightBulb);
		float operator *(LightBulb);

};


LightBulb LightBulb::operator ++() {
	LightBulb otemp;
	otemp.setWattage(++wattage);
	return otemp;
}

int LightBulb::operator +(int addValue) {
	return wattage + addValue;
}

bool LightBulb::operator >(LightBulb bulb) {
	return calcConsumption()>bulb.calcConsumption();
}

float LightBulb::operator *(LightBulb bulb) {
	return (calcPrice() + bulb.calcPrice()) * 30; 
}


int main()
{
	LightBulb Bulb_Philips;
	LightBulb Bulb_Himstar("Himstar", 25, false);
	
	string brand;
	char temp;
	float wattage;
	bool led;
	
	int choice;
	int addValue;
	float another;
	
	cout << "Enter the brand of lightbulb : "; 
	cin >> brand;
	cout << "Enter the wattage of the lightbulb : ";
	cin >> wattage;
	cout << "Is the lightbulb LED? (y/n) : ";
	cin >> temp;
	
	if (temp=='y'|| temp=='Y')	{
		led = true;
	}
	else {
		led = false;
	}
	
	LightBulb Bulb_User = Bulb_Philips;
	Bulb_User.setBrand(brand);
	Bulb_User.setWattage(wattage);
	Bulb_User.setLed(led);
	
	cout << "\nFor Default Constructor values (" << Bulb_Philips.getBrand() << "'s ";
	cout << Bulb_Philips.getWattage() << " watt " << (Bulb_Philips.getisLed()?"led":"non led") << " bulb)" << endl;
	cout << "The electricity consumption of bulb in one day : " << Bulb_Philips.calcConsumption() << " kWh." << endl;
	cout << "The electricity wastage of bulb in one day : " << Bulb_Philips.calcWastage() << " kWh." << endl;
	cout << "The electricity price of bulb in one day : Rs." << Bulb_Philips.calcPrice() << endl;
	
	cout << "\nFor Overloaded Constructor values (" << Bulb_Himstar.getBrand() << "'s ";
	cout << Bulb_Himstar.getWattage() << " watt " << (Bulb_Himstar.getisLed()?"led":"non led") << " bulb)" << endl;
	cout << "The electricity consumption of bulb in one day : " << Bulb_Himstar.calcConsumption() << " kWh." << endl;
	cout << "The electricity wastage of bulb in one day : " << Bulb_Himstar.calcWastage() << " kWh." << endl;
	cout << "The electricity price of bulb in one day : Rs." << Bulb_Himstar.calcPrice() << endl;
	
	cout << "\nFor User Entered values (" << Bulb_User.getBrand() << "'s ";
	cout << Bulb_User.getWattage() << " watt " << (Bulb_User.getisLed()?"led":"non led") << " bulb)" << endl;
	cout << "The electricity consumption of bulb in one day : " << Bulb_User.calcConsumption() << " kWh." << endl;
	cout << "The electricity wastage of bulb in one day : " << Bulb_User.calcWastage() << " kWh." << endl;
	cout << "The electricity price of bulb in one day : Rs." << Bulb_User.calcPrice() << endl << endl;
	
	
	cout << "Enter the bulb whose wattage you want to increase (1/2/3): ";
	cin >> choice;
	cout << "Enter the amount you want to increase : ";
	cin >> addValue;
	
	
	if(choice==1) {
		if(addValue==1) {
			++Bulb_Philips;
			cout << "\nNew Wattage of " << Bulb_Philips.getBrand() << "'s bulb : " << Bulb_Philips.getWattage() << endl;
		}
		else {
			cout << "\nNew Wattage of " << Bulb_Philips.getBrand() << "'s bulb : " << Bulb_Philips + addValue << endl;			
		}
	}
	else if(choice==2) {
		if(addValue==1) {
			++Bulb_Himstar;
			cout << "\nNew Wattage of " << Bulb_Himstar.getBrand() << "'s bulb : " << Bulb_Himstar.getWattage() << endl;
		}
		else {
			cout << "\nNew Wattage of " << Bulb_Himstar.getBrand() << "'s bulb : " << Bulb_Himstar + addValue << endl;			
		}
	}
	else if(choice==3) {
		if(addValue==1) {
			++Bulb_User;
			cout << "\nNew Wattage of " << Bulb_User.getBrand() << "'s bulb : " << Bulb_User.getWattage() << endl;
		}
		else {
			cout << "\nNew Wattage of " << Bulb_User.getBrand() << "'s bulb : " << Bulb_User + addValue << endl;			
		}
	}
	else {
		cout << "Invalid Input!" << endl;
	}
	
	if(Bulb_Philips>Bulb_User && Bulb_Philips>Bulb_Himstar) {
		cout << "\nThe maximum power is consumed by " << Bulb_Philips.getBrand() << "'s " << Bulb_Philips.getWattage() << " watt bulb." << endl;
	}
	else if(Bulb_Himstar>Bulb_User && Bulb_Himstar>Bulb_Philips){
		cout << "The maximum power is consumed by " << Bulb_Himstar.getBrand() << "'s " << Bulb_Himstar.getWattage() << " watt bulb." << endl;
	}
	else {
		cout << "The maximum power is consumed by " << Bulb_User.getBrand() << "'s " << Bulb_User.getWattage() << " watt bulb." << endl;
	}
	
	cout << "\nThe total electricity price of " << Bulb_Philips.getBrand() << "'s and " << Bulb_Himstar.getBrand() << "'s bulb in a month is : Rs." << Bulb_Philips*Bulb_Himstar; 
	cout << "\nThe total electricity price of " << Bulb_Himstar.getBrand() << "'s and " << Bulb_User.getBrand() << "'s bulb in a month is : Rs." << Bulb_Himstar*Bulb_User;
	cout << "\nThe total electricity price of " << Bulb_Philips.getBrand() << "'s and " << Bulb_User.getBrand() << "'s bulb in a month is : Rs." << Bulb_Philips*Bulb_User;
	
	return 0;
}
	