#include<iostream>
#include"LightBulb.h"
// #include "Exceptions.h"
using namespace std;

// DERIVED CLASS

class ModernLightbulb : public LightBulb
{
private:
    string baseType;

public:
    ModernLightbulb() {}
    ModernLightbulb(string bulb, int watt, bool led, string bt) : LightBulb(bulb, watt, led), baseType(bt) {}

    void setbaseType(string bt)
    {
        if(bt=="E17") {
            throw BaseTypeException("Base Type Error", bt);
        }
        else {
            baseType = bt;
        }
    }
    string getbaseType()
    {
        return baseType;
    }

    float calcLumens()
    {
        if (isLed)
        {
            return 18 * wattage;
        }
        else
        {
            return 12 * wattage;
        }
    }

    // int check=0;

    // const char *top10[10] = {"bajaj", "fiem", "ge", "havells", "osram", "pharox", "philips", "surya", "syska"};

    bool isBright()
    {
        if (calcLumens() > 900)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    float calcConsumption()
    {
        if (wattage < 0)
        {
            return 0;
        }
        else
        {
            return wattage * 24 / 1000;
        }
    }
};