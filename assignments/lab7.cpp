/*
 *
 * Program : Operator Overloading with Point class
 * Author : Nishant Khadka
 * Date : 15/03/2022
 *
 *
 */

#include <iostream>
using namespace std;

class Point
{
    private:
        int x = 0;
        int y = 0;

    public:
        Point() {}
        Point(int xcord, int ycord) : x(xcord), y(ycord) {}

        int getX() const {
            return x;
        }
        void setX(int xcord) {
            x = xcord;
        }

        int getY() const {
            return y;
        }
        void setY(int ycord) {
            y = ycord;
        }

        void setXY(int xcord, int ycord) {
            x = xcord;
            y = ycord;
        }

       double getMagnitude() const {
            return 0;
        }

        double getArgument() const{
            return 0;
        }

        void print() const {
            cout << "(" << x << "," << y << ")";
        }

        Point operator +(Point);

};

Point Point::operator +(Point temp) {
    return Point(x + temp.getX(), y + temp.getY());
}

int main()
{
    int x1,x2,x3,x4,x5;
    int y1,y2,y3,y4,y5;

    cout << "For first point : " << endl;
    cout << "Enter X : ";
    cin >> x1;
    cout << "Enter Y : ";
    cin >> y1;

    cout << endl << "For second point : " << endl;
    cout << "Enter X : ";
    cin >> x2;
    cout << "Enter Y : ";
    cin >> y2;

    cout << endl << "For third point : " << endl;
    cout << "Enter X : ";
    cin >> x3;
    cout << "Enter Y : ";
    cin >> y3;

    Point firstPoint(x1, y1);
    Point secondPoint(x2, y2);
    Point thirdPoint;
    thirdPoint.setXY(x3, y3);
    Point fourthPoint;

    cout << "\nEntered points : " << endl;
    firstPoint.print();
    cout << endl;
    secondPoint.print();
    cout << endl;
    thirdPoint.print();
    cout << endl;

    cout << "\nSUMS : " << endl;
    Point firstSum = firstPoint + secondPoint;
    firstPoint.print();
    cout << " + ";
    secondPoint.print();
    cout << " = ";
    firstSum.print();

    cout << "\n\nSum of all four points : " << endl;
    Point sumAll = firstPoint + secondPoint + thirdPoint + firstSum;
    firstPoint.print();
    cout << " + ";
    secondPoint.print();
    cout << " + ";
    thirdPoint.print();
    cout << " + ";
    firstSum.print();
    cout << " = ";
    sumAll.print();

    return 0;
}