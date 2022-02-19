#include <iostream>
#include<iomanip>
using namespace std;
class Vehicle
{
    private:
    string Model_name;
    string Brand;
    float Mileage;
    string Type;

    public:
    Vehicle(string mn , string b, float m, string t): Model_name(mn), Brand(b), Mileage(m), Type(t){
    }

    void setModel_name(string mn){
        Model_name = mn;
    }
    void setBrand(string b){
        Brand = b;
    }
    void setMileage(float m){
        Mileage = m;
    }
    void setType(string t){
        Type = t;
    }     
    string getModel_name(){
        return Model_name;
    }
    string getBrand(){
         return Brand;
    }
    float getMileage(){
         return Mileage;
    }
    string getType(){
         return Type;
    }     
    
};
int main(){
    string mn;
    string b;
    float m;
    string t;
    
   cout<<"enter your car model: "; cin>>mn;
   cout<<"enter your car brand: "; cin>>b;   
   cout<<"enter your car mileage: "; cin>>m;   
   cout<<"enter your car type: "; cin>>t;   
   Vehicle v1(mn,b,m,t);
   cout<<endl<<"enter your car model: "; cin>>mn; 
   cout<<"enter your car brand: "; cin>>b;   
   cout<<"enter your car mileage: "; cin>>m;   
   cout<<"enter your car type: "; cin>>t;  
   Vehicle v2(mn,b,m,t);
   cout<<endl<<"enter your car model: "; cin>>mn;
   cout<<"enter your car brand: "; cin>>b;   
   cout<<"enter your car mileage: "; cin>>m;   
   cout<<"enter your car type: "; cin>>t;  
   Vehicle v3(mn,b,m,t);
//   cout<<endl<<"enter your car model: "; cin>>mn;   
//   cout<<"enter your car brand: "; cin>>b;   
//   cout<<"enter your car mileage: "; cin>>m;   
//   cout<<"enter your car type: "; cin>>t;  
//   Vehicle v4(mn,b,m,t);
//   cout<<endl<<"enter your car model: "; cin>>mn;   
//   cout<<"enter your car brand: "; cin>>b;   
//   cout<<"enter your car mileage: "; cin>>m;   
//   cout<<"enter your car type: "; cin>>t;   
//   Vehicle v5(mn,b,m,t);

   cout<<setiosflags(ios::left);
   cout<<endl<<setw(13)<<"Car Model"<<setw(13)<<"Brand"<<setw(13)<<"Mileage"<<setw(13)<<"Type"<<endl;
   cout<<"--------------------------------------------------------------------------------------------"<<endl;
   cout<<setw(13)<<v1.getModel_name()<<setw(13)<<v1.getBrand()<<setw(13)<<v1.getMileage()<<setw(13)<<v1.getType()<<endl;
   cout<<setw(13)<<v2.getModel_name()<<setw(13)<<v2.getBrand()<<setw(13)<<v2.getMileage()<<setw(13)<<v2.getType()<<endl;
   cout<<setw(13)<<v3.getModel_name()<<setw(13)<<v3.getBrand()<<setw(13)<<v3.getMileage()<<setw(13)<<v3.getType()<<endl;
//   cout<<setw(13)<<v4.getModel_name()<<setw(13)<<v4.getBrand()<<setw(13)<<v4.getMileage()<<setw(13)<<v4.getType()<<endl;
//   cout<<setw(13)<<v5.getModel_name()<<setw(13)<<v5.getBrand()<<setw(13)<<v5.getMileage()<<setw(13)<<v5.getType()<<endl;
    
    return 0;
   
   
}
 