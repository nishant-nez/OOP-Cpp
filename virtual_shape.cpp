#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void printArea() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle() {}
    Circle(float rad) : radius(rad) {}

    void printArea()
    {
        cout << "The area of circle is : " << 30.14 * radius * radius << endl;
    }
};

class Square : public Shape
{
private:
    float side;

public:
    Square() {}
    Square(float sd) : side(sd) {}

    void printArea()
    {
        cout << "The area of square is : " << side * side << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle() {}
    Rectangle(float len, float brd) : length(len), breadth(brd) {}

    void printArea()
    {
        cout << "The area of rectangle is : " << length * breadth << endl;
    }
};

class Triangle : public Shape {
    private:
        float base;
        float height;

    public:
        Triangle() {}
        Triangle(float bs, float ht) : base(bs), height(ht) {}

        void printArea()
        {
            cout << "The area of triangle is : " << base * height * 0.5 << endl;
        }
};

int main()
{
    // Shape *objShp[50];
    // objShp[0] = new Circle(2.5);
    // objShp[1] = new Square(3.9);
    // objShp[2] = new Rectangle(5.5, 7.9);

    // for (int i = 0; i < 3; i++)
    // {
    //     objShp[i]->printArea();
    // }

    Shape *objType[50];
    int choice;
    char rept='y';
    cout << "1.Cirlce" << endl;
    cout << "2.Square" << endl;
    cout << "3.Rectangle" << endl;
    cout << "4.Triangle" << endl;

    while(rept == 'y') {

        cout << "Enter your shape [1/2/3/4] : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int rad;
            cout << "Enter the Radius of Circle: ";
            cin >> rad;
            objType[0] = new Circle(rad);
            objType[0]->printArea();
            break;

        case 2:
            int sd;
            cout << "Enter the Side of Square: ";
            cin >> sd;
            objType[1] = new Square(sd);
            objType[1]->printArea();
            break;

        case 3:
            int len, brd;
            cout << "Enter the Length of Rectangle: ";
            cin >> len;
            cout << "Enter the Breadth of Rectangle: ";
            cin >> brd;
            objType[2] = new Rectangle(brd, len);
            objType[2]->printArea();
            break;

        case 4:
            int bs, ht;
            cout << "Enter the Base of Triangle: ";
            cin >> bs;
            cout << "Enter the Height of Triangle: ";
            cin >> ht;
            objType[3] = new Square(sd);
            objType[3]->printArea();
            break;

        default:
            cout << "Please enter a valid choice!";
            break;
        }

        cout << "Do you want to try again? (y/n) : ";
        cin >> rept;
    }
}