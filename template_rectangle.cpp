// Template Specialization

#include<iostream>
using namespace std;

template<class T>
class Rectangle {
    private:
    T length;
    T breadth;

    public:
    Rectangle(){}
    Rectangle(T len, T brd):length(len), breadth(brd) {}
    T getLength() {
        return length;
    }
    T getBreadth() {
        return breadth;
    }

    void setLength(T len) {
        length = len;
    }
    void setBreadth(T brd) {
        breadth = brd;
    }
    T calcArea();

};

template<class T>
T Rectangle<T>::calcArea() {
    return length * breadth;
}

template<class T>
class AdvRectangle {
    
};

int main() {
    Rectangle <int> rect1;
    Rectangle <float> rect2(5.5, 6.9);
    
    rect1.setLength(50);
    rect1.setBreadth(60);
    

    cout << rect1.getLength() << rect1.getBreadth()<<endl;
    cout << rect2.calcArea();
}
