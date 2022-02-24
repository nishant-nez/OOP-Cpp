#include<iostream>
float rate = 8.290;

using namespace std;

class LightBulb
{
protected:
    string brand;
    float wattage;
    bool isLed;

public:
    // LightBulb() {}
    // Default Constructor
    LightBulb() : brand("Philips"), wattage(60), isLed(true) {}

    // Overloaded Constructor
    LightBulb(string company, float watt, bool led) : brand(company), wattage(watt < 0 ? 0 : watt), isLed(led) {}

    // Destructor
    ~LightBulb() {}

    void setBrand(string company) { brand = company; }
    string getBrand() { return brand; }

    void setWattage(float watt)
    {
        if (watt < 0)
        {
            wattage = 0;
        }
        else
        {
            wattage = watt;
        }
    }
    float getWattage() { return wattage; }

    void setLed(bool led) { isLed = led; }
    bool getisLed() { return isLed; }

    float calcConsumption()
    {
        return wattage * 24 / 1000;
    }

    float calcWastage()
    {
        if (isLed)
        {
            return 10.0 / 100.0 * calcConsumption();
        }
        else
        {
            return 90.0 / 100.0 * calcConsumption();
        }
    }

    float calcPrice()
    {
        return rate * calcConsumption();
    }

    // operator overloading
    LightBulb operator++();
    int operator+(int);
    bool operator>(LightBulb);
    float operator*(LightBulb);
};

LightBulb LightBulb::operator++()
{
    LightBulb otemp;
    otemp.setWattage(++wattage);
    return otemp;
}

int LightBulb::operator+(int addValue)
{
    return wattage + addValue;
}

bool LightBulb::operator>(LightBulb bulb)
{
    return calcConsumption() > bulb.calcConsumption();
}

float LightBulb::operator*(LightBulb bulb)
{
    return (calcPrice() + bulb.calcPrice()) * 30;
}