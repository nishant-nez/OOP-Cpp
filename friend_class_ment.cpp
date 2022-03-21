#include<iostream>
using namespace std;

class Monitor {
    friend class DisplayProperty;

    private:
        string brand;
        float size;
        bool hdr;

    public:
        Monitor():brand("Lenovo"), size(15.6), hdr(true) {}

};

class DisplayProperty {
    private:
        int choice;

    public:
        DisplayProperty():choice(0) {}
        DisplayProperty(char ch):choice(ch) {}

        void print(Monitor lenovo) {
            string temp = (lenovo.hdr)?" hdr.":" not hdr";
            switch (choice)
            {
            case 1:
                cout << endl << "Brand Name : " << lenovo.brand << endl;
                break;
            
            case 2:
                cout << endl << "Monitor display size : " << lenovo.size << " inches" << endl;
                break;

            case 3:               
                cout << endl << "Monitor is" << temp << endl;
                break;
            
            default:
                cout << endl << "Monitor details: " <<endl;
                cout << "Brand Name : " << lenovo.brand << endl;
                cout << "Monitor display size : " << lenovo.size << " inches" << endl;
                cout << "Monitor is" << temp << endl;
                break;
            }
        }
};

int main() {
    int ch;
    cout << "PRESS A KEY:"<<endl;
    cout << "(0) Monitor Details." << endl;
    cout << "(1) Monitor's Brand." << endl;
    cout << "(2) Monitor's Display Size." << endl;
    cout << "(3) Monitor's HDR support." << endl;
    cin >> ch;

    Monitor screen;
    DisplayProperty show(ch);
    show.print(screen);
}