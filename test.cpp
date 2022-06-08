// Define an abstract class called Student with necessary attributes and their types along with desired member functions. Also,
// a. Derive Computer Science and Mathematics classes from the Student class adding at least three subjects as attributes as well as the constructor.
// b. Use these classes in a main program and display the average marks of computer science and mathematics students

#include<iostream>
using namespace std;

class Student{
    protected:
    string name;
    int rollNo;

    public:
    virtual int avg()=0;
    Student(){}
    Student(string nam, int roll):name(nam),rollNo(roll){}

    


};

class ComputerScience:public Student{
    private:
    int m1; int m2; int m3;

    public:
    ComputerScience(){}
    ComputerScience(int marks1, int marks2, int marks3):m1(marks1),m2(marks2),m3(marks3){}

    int avg(){
        return (m1+m2+m3)/3;
    }
    

};

class Mathematics:public Student{

    private:
    int s1; int s2; int s3;

    public:
    Mathematics(){}
    Mathematics(int score1,int score2, int score3):s1(score1),s2(score2),s3(score3){}

    int avg(){
        return (s1+s2+s3)/3;
    }

};

int main(){
    
    ComputerScience cs(70,80,90);
    Mathematics m(10,20,30);

    cout<<"Average marks of Computerscience is: "<<cs.avg()<<endl;
    cout<<"Average marks of Mathematics is: "<<m.avg()<<endl;


}