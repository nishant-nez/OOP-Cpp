#include<iostream>
using namespace std;

class Publication {
    protected:
        string title;
        float price;

    public:
        Publication() {}
        Publication(string t, float pr):title(t), price(pr) {}

        void getdata() {
            cout << "Enter the title : ";
            cin >> title;
            cout << "Enter the price : ";
            cin >> price;
        }

        void putdata() {
            cout << "Title : " << title << endl;
            cout << "Price : " << price << endl;
        }

        string getTitle() {
            return title;
        }
        float getPrice() {
            return price;
        }
};

class Publication2 : public Publication{
    protected:
        int month;
        int day;
        int year;
    
    public:
        Publication2() {}
        Publication2(int m, int d, int y):month(m), day(d), year(y) {}
        Publication2(string t, float pr, int m, int d, int y):Publication(t, pr), month(m), day(d), year(y) {}

        void getdate() {
            char temp;
            cout << "Enter the date in MM/DD/YY format : ";
            cin >> month;
            cin >> temp;
            cin >> day;
            cin >> temp;
            cin >> year;
        }

        void showdate() {
            cout << month << "/" << day << "/" << year << endl;
        }

        int getMonth() {
            return month;
        }
        int getDay() {
            return day;
        }
        int getYear() {
            return year;
        }
};

class Book : public Publication2 {
    private:
        int pageCount;

    public:
        Book() {}
        Book(int pc):pageCount(pc) {}
        Book(int m, int d, int y, int pc):Publication2(m, d, y), pageCount(pc) {}

        void getdata() {
            cout << "Enter the page count : ";
            cin >> pageCount;
        }

        void putdata() {
            cout << "Page Count : " << pageCount << endl;
        }

        int getpageCount() {
            return pageCount;
        }        
};

class Tape : public Publication2 {
    private:
        float playingTime;

    public:
        Tape() {}
        Tape(float pt):playingTime(pt) {}
        Tape(int m, int d, int y, float pt):Publication2(m, d, y), playingTime(pt) {}

        void getdata() {
            cout << "Enter the playing time : ";
            cin >> playingTime;
        }

        float getPlayingTime() {
            return playingTime;
        }
};


int main() {
    string bTitle;
    float bPrice;
    int month, day, year, pCount;
    float pTime;

    cout << "Enter the title of the book: ";
    cin >> bTitle;
    cout << "Enter the book price: ";
    cin >> bPrice;
    cout << "Enter the playing time: ";
    cin >> pTime;
    cout << "Enter the page count: ";
    cin >> pCount;

    Publication2 publish;
    publish.getdate();
    publish.showdate();
    
    Book newBook(publish.getMonth(), publish.getDay(), publish.getYear(), pCount);
    Tape newTape(publish.getMonth(), publish.getDay(), publish.getYear(), pTime);




}