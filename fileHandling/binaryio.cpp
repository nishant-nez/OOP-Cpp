#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    const int MAX=50;
    int buffer[MAX];
    for(int i=0; i<MAX; i++) {
        buffer[i]=i+10;
    }

    ofstream os("data4.txt", ios::binary);
    os.write(reinterpret_cast<char *>(buffer), MAX*sizeof(int));
    os.close();

    ifstream is("data4.txt", ios::binary);
    is.read(reinterpret_cast<char *>(buffer), MAX*sizeof(int));

    for(int i=0; i<MAX; i++) {
        cout << buffer[i];
    }
}