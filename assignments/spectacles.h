#include <iostream>
#include <iomanip>
using namespace std;

class Spectacles
{
    protected:
        string lensColor;
        string frameMaterial;
        int price;
        float power;

    public:
        Spectacles() : lensColor("Red"), frameMaterial("Plastic"), price(2000), power(0.5) {}

        Spectacles(string lc, string fm, int p, float pwr) : lensColor(lc), frameMaterial(fm),price(p),power(pwr) {}

        void setlensColor(string lc) { lensColor=lc; }
        void setframeMaterial(string fm) { frameMaterial=fm; }
        void setprice(int p) { price=p; }
        void setpower(float pwr) { power=pwr; }

        string getlensColor() { return lensColor; }
        string getframeMaterial() { return frameMaterial; }
        int getprice() {return price; }
        float getpower() { return power; }

        float calcFocalLength()
        {
            return (1/power);
        }
    
        bool operator >(Spectacles temp)
        {
            return price>temp.price;
        }

        Spectacles operator ++(){
            return Spectacles(lensColor, frameMaterial, price, power++);
        }
};

class NewSpectacles:public Spectacles {
    private:
    string brand;
    float focalLength;

    public:
        NewSpectacles() {}
        NewSpectacles(string lc, string fm, int p, float pwr, string bd, float fl):Spectacles(lc,fm,p,pwr), brand(bd), focalLength(fl) {}

        string getBrand() {
            return brand;
        }
        void setBrand(string bd) {
            brand=bd;
        }

        float getFocalLength() {
            return focalLength;
        }
        void setFocalLength(float fl) {
            focalLength = fl;
        }

        float calcRadius() {
            return 2*focalLength;
        }

};
