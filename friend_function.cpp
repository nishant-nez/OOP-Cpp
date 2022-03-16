#include<iostream>
using namespace std;

class Paper;

class Box {
    friend int printData(Box, Paper);
    friend class Paper;

    private:
        int data;

    public:
        Box():data(5){}
};

class Paper {
    friend int printData(Box, Paper);

    private: 
        int data;

    public:
        Paper():data(15){}
};

int printData(Box bx, Paper pa) {
    return bx.data + pa.data;
}

int main() {
    Box objBox;
    Paper objPaper;

    cout << printData(objBox, objPaper);
}