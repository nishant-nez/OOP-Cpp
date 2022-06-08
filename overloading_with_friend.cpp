#include<iostream>
using namespace std;

class Student {
    protected:
        string name;
        int roll;
        string faculty;

    public:
        Student() {}
        Student(string nm, int rl, string fc):name(nm), roll(rl), faculty(fc) {}

        virtual float avg()=0;
};

class ComputerScience:public Student {
    private:
        float subject1;
        float subject2;
        float subject3;

    public:
        ComputerScience() {}
        ComputerScience(float s1, float s2, float s3):subject1(s1), subject2(s2), subject3(s3) {}
        ComputerScience(string nm, int rl, string fc, float s1, float s2, float s3):Student(nm, rl, fc), subject1(s1), subject2(s2), subject3(s3) {}

        float avg() {
            return (subject1+subject2+subject3)/3.0;
        }

        void getName() {
            cout<<name;
        }
};

class Mathematics:public Student {
    private:
        float subject4;
        float subject5;
        float subject6;

    public:
    Mathematics() {}
    Mathematics(float s4, float s5, float s6):subject4(s4), subject5(s5), subject6(s6) {}

    float avg() {
        return (subject4+subject5+subject6)/3.0;
    }
};

int main() {
    
    ComputerScience sub1(89, 88, 74);
    ComputerScience sub1_1("Nish", 1017, "csit", 89, 44, 56);
    Mathematics sub2(89, 90.7, 74);

    cout << sub1.avg() << endl;
    cout << sub2.avg() << endl;
    sub1_1.getName();

}
