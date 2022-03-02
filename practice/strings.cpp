#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    name = "Ram";
    string name2 = "Shyam";
    string name3;
    char name4[10];
    string name5;

    cin >> name3;
    cin.get(name4, 10);
    cout << name4;
    getline(cin, name5);
    // getline(name5);

    cout << name5;
}