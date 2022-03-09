#include<iostream>
using namespace std;

class Author {
    private:
        string name;
        string email;
        char gender;

    public:
        Author(){};
        Author(string nm, string em, char g):name(nm), email(em), gender(g) {};

        string getName() {
            return name;
        }
        string getEmail() {
            return email;
        }
        char getGender() {
            return gender;
        }

        void setEmail(string em) {
            email = em;
        }

        string toString() {
            string con = name + " at " + email;
            return con;
        }
};

class Book {
    private:
        string name;
        Author author;
        float price;
        int quantity;

    public:
        Book(){};
        Book(string nme, Author auth, float pr):name(nme), author(auth), price(pr) {}
        //check 
        Book(string nme, Author auth, float pr, int qt) : name(nme), author(auth), price(pr), quantity(qt) {}

        string getName() {
            return name;
        }
        // CHECK
        Author getAuthor() {
            return author;
        }

        float getPrice() {
            return price;
        }
        int getQuantity() {
            return quantity;
        }

        void setPrice(float pr) {
            price = pr;
        }
        void setQuantity(int qty) {
            quantity = qty;
        } 

        string toString() {
            return "'" + name + "' by " + author.getName() + " at " + author.getEmail();
        }

        void getValues() {
            cout << "Enter books's name: ";
            cin >> name;
//             getline(cin, name);
            cout << "Enter book's price: ";
            cin >> price;
            cout << "Enter book's quantity: ";
            cin >> quantity;
        }
};

int main() {
    
    string nm;
    string em;
    char g;
    int num;

    cout << "-------------------CREATING NEW AUTHOR-------------------" << endl << endl;
    cout << "Enter the author's name: ";
    getline(cin, nm);
    cout << "Enter the author's email: ";
    cin >> em;
    cout << "Enter the author's gender (M/F): ";
    cin >> g;
    cout << "Enter number of books of this author: ";
    cin >> num;
    Author firstAuthor(nm, em, g);

    cout << "\n---------------CREATING BOOKS FOR " << firstAuthor.getName() <<"---------------" << endl;
    Book defl("Empty", firstAuthor, 100.0, 1);
    Book novel[num];
    for (int i=0; i<num; i++) {
        cout << "\nFor book " << i+1 << ":" << endl;
        novel[i] = defl;
        novel[i].getValues();
    }

    // OUTPUT
    cout << "\n---------------------AUTHOR DETAILS---------------------" << endl << endl;
    cout << "Author Name: " << firstAuthor.getName() << endl;
    cout << "Author Email: " << firstAuthor.getEmail() << endl;
    cout << "Author Gender: " << firstAuthor.getGender() << endl << endl;

    cout << "\n----------------------BOOK DETAILS----------------------" << endl << endl;
    for (int i = 0; i < num; i++)
    {
        cout << novel[i].toString() << endl;
        cout << "Book Name: " << novel[i].getName() << endl;
        cout << "Book Price: " << novel[i].getPrice() << endl;
        cout << "Book Quantity: " << novel[i].getQuantity() << endl << endl;
    }

    cout << "\n\n" << firstAuthor.toString();
}