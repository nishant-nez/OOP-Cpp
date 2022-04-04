/*
 *
 * Program : To implement a real world Class (LightBulb) with and derive new class
 *  inclusion of exception
 * Author : Nishant Khadka
 * Date : 30/03/2022
 *
 *
 */

#include<iostream>
#include"ModernLightbulb.h"

using namespace std;


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
	// exception
	try {
		Bulb_User.setWattage(wattage);
	} catch(NegativeValueException hw) {
		cout << hw.prompt << " could not be set. (value = " << hw.value << ")" << endl;
	}
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
	cout << "\nThe total electricity price of " << Bulb_Philips.getBrand() << "'s and " << Bulb_User.getBrand() << "'s bulb in a month is : Rs." << Bulb_Philips*Bulb_User << endl << endl;

	// Object of ModernLightbulb
	ModernLightbulb mdBulb("bajaj", 65, true, "E17");
	
	cout << "Electricity consumption for modern light bulb in a day is: " << mdBulb.calcConsumption() << "kWh" << endl << endl;




	LightBulb nw;

	try {
		nw.setWattage(-1);

	} catch(NegativeValueException ne) {
		cout << ne.prompt << " cannot be negative. (value = " << ne.value << ")" << endl;
	}

	ModernLightbulb mdl;

	try {
		mdl.setbaseType("E17");
	} catch(BaseTypeException bt) {
		cout << bt.prompt << " with value = " << bt.value << endl;
	}

	return 0;
}
	