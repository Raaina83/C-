#include<iostream>
using namespace std;
//INHEITANCE
class Employee{
    public:
    int id;
    float salary;
    string name;
    Employee(int i,float sal,string n){
        id=i;
        salary=sal;
        name=n;
    }
    void printDetails(){
        cout<<"The Name of employee "<<id<<" is "<<name<<"."<<"Their assigned salary is "<<salary<<"."<<endl;
    }
    Employee(){};

};

class Programmer:public Employee{ //public members of base class become public members of derived class,private ones can never be inherited!!
    public:
    Programmer(int i){
        id=i;
        salary=567.56;
        name="Priya";
    }
};
 int main(){
    Employee e1=Employee(1001,459.56,"Raaina");
    e1.printDetails();
    Programmer p1(2001);
    p1.printDetails();
    return 0;
 }