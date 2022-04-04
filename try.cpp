#include <iostream>
#include <string>
using namespace std;

class US_SPECIAL_FORCES{
	private: //data members
    	string Name;
    	int Age;
    	string Address;
    	string Branch;
    	string Rank;
    	float Years_served;
    	float Base_salary;
    	float Increment_per_rank;


	public: //member functions

		US_SPECIAL_FORCES(string name, int age, string address, string branch, string rank,
                      float years_served, float base_salary, float increment_per_rank):
            Name(name), Age(age), Address(address), Branch(branch), Rank(rank), Years_served(years_served),
            Base_salary(base_salary), Increment_per_rank(increment_per_rank){} 


    	void setName(string name){Name=name;}
    	void setAge(int age) {Age=age;}
   		void setAddress(string address) {Address=address;}
    	void setBranch(string branch) {Branch=branch;}
    	void setRank(string rank){Rank=rank;}
    	void setYears_in_served(float years_served){Years_served=years_served;}
    	void setBasic_salary(float base_salary) {Base_salary=base_salary;}
    	void setInterest_per_rank(float increment_per_rank) {Increment_per_rank=increment_per_rank;}


    	string getName() {return Name;}
    	int getAge() {return Age;}
    	string getAddress() {return Address;}
    	string getBranch() {return Branch;}
    	string getRank() {return Rank;}
    	float getYears_in_service() {return Years_served;}
    	float getBasic_salary() {return Base_salary;}
    	float getInterest_in_rank() {return Increment_per_rank;}

    

    long calcRetirement_pension()
    {
        return Base_salary+Base_salary*Years_served*(Increment_per_rank/100);
    }

};

int main() {
//    US_SPECIAL_FORCES ent1;

    string name;
    string address;
    string branch;
    string rank;
    char temp;
    int age;
    float years_served,base_salary,increment_per_rank;

    cout<<"Enter the Operator's name:";
//    getline(cin,name);
//	cin.getline(name,sizeof(name));
//	scanf("[^\n]", name);
	cin>>name;
    cout<<"Enter the Operator's age:";
    cin>>age;
    cout<<"Enter the Operator's address:";
//    getline(cin,address);
//	cin.getline(address,sizeof(address));
//	scanf("[^\n]", address);
    cin>>address;
	cout<<"Enter the years served in military:";
    cin>>years_served;
    cout<<"Enter the Operator's branch of service:";
    cin>>branch;
//    getline(cin,branch);
//	cin.getline(branch,sizeof(branch));
//	scanf("[^\n]", branch);
    
    
    cout<<"Enter the base salary:";
    cin>>base_salary;
    cout<<"Enter the raise per rank:";
    cin>>increment_per_rank;
    cout<<endl;

	US_SPECIAL_FORCES ent1(name,age,address,branch,rank,years_served,base_salary,increment_per_rank);
	

    

    cout<<"The name of Operator: "<<ent1.getName()<<endl;
    cout<<"The age of Operator: "<<ent1.getAge()<<endl;
    cout<<"The address of Operator: "<<ent1.getAddress()<<endl;
    cout<<"The Operator's branch: "<<ent1.getBranch()<<endl;
    cout<<"The Operator's rank: "<<ent1.getRank()<<endl;
    cout<<"The Operator's years in service: "<<ent1.getYears_in_service()<<endl;
    cout<<"The Operator's basic salary: "<<ent1.getBasic_salary()<<endl;
    cout<<"Increment percentage of salary by rank for the Operator's: "<<ent1.getInterest_in_rank()<<endl;
    cout<<"The retirement funds for the Operator:"<<ent1.calcRetirement_pension()<<endl<<endl;


    
    cout<<"Enter the Operator's name:";
//    getline(cin,name);
	cin>>name;
    cout<<"Enter the Operator's age:";
    cin>>age;
    cout<<"Enter the Operator's address:";
//    getline(cin,address);
	cin>>address;
    cout<<"Enter the years served in military:";
    cin>>years_served;
    cout<<"Enter the Operator's branch of service:";
//    getline(cin,branch);
	cin>>branch;
    cout<<"Enter the base salary:";
    cin>>base_salary;
    cout<<"Enter the Operator's rank:";
//    getline(cin,rank);
	cin>>rank;
    
    
    cout<<"Enter the raise per rank:";
    cin>>increment_per_rank;
    cout<<endl;
    
    US_SPECIAL_FORCES ent2 = ent1;
    
	ent2.setName(name);
    ent2.setAge(age);
    ent2.setAddress(address);
    ent2.setBranch(branch);
    ent2.setRank(rank);
    ent2.setYears_in_served(years_served);
    ent2.setBasic_salary(base_salary);
    ent2.setInterest_per_rank(increment_per_rank);

//    US_SPECIAL_FORCES ent2(name,age,address,branch,rank,years_served,base_salary,increment_per_rank);
    cout<<"The name of Operator: "<<ent2.getName()<<endl;
    cout<<"The age of Operator: "<<ent2.getAge()<<endl;
    cout<<"The address of Operator: "<<ent2.getAddress()<<endl;
    cout<<"The Operator's branch: "<<ent2.getBranch()<<endl;
    cout<<"The Operator's rank: "<<ent2.getRank()<<endl;
    cout<<"The Operator's years in service: "<<ent2.getYears_in_service()<<endl;
    cout<<"The Operator's basic salary: "<<ent2.getBasic_salary()<<endl;
    cout<<"Increment percentage of salary by rank for the Operator's: "<<ent2.getInterest_in_rank()<<endl;
    cout<<"The retirement funds for the Operator:"<<ent2.calcRetirement_pension()<<endl<<endl;


    return 0;
}