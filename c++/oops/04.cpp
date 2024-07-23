#include<iostream>
using namespace std;

class AbstractEmployee{  //ABSTRACTION-used when you need to handle complex properties but dont want user to know anout complexity to make it easier for them!
    virtual void AskForPromotion()=0;
};

class employee:AbstractEmployee{  //INHERITANCE-employee class is inheriting methods of abstractemployee
private:    
    string name;
    string company;
    int age;
public:  //ENCAPSULATION-binding of data so no one can directly access them!
    void setname(string na){ //SETTER
    name=na;
    }
    string getname(){ //GETTER
    return name;
    }
    void setcompany(string co){
        company=co;
    }
    string getcompany(){
        return company;
    }
    void setage(int aa){
        if(aa>=18){
        age=aa;
        }
    }
    int getage(){
        return age;
    }
    void AskForPromotion(){
        if(age>30){
            cout<<name<<" got promoted!"<<endl;
        }
        else
           cout<<name<<" sorry,you did not get promotion!"<<endl;
    }
    void intoduction(){
        cout<<"name is "<< name<<endl;
        cout<<"age is "<< age<<endl;
        cout<<"company working for is "<< company<<endl;
    }
    employee(string n,string c,int a){  //CONSTRUCTOR(should be public)
        name=n;
        company=c;
        age=a;
    }
};

class developer:employee{ //developer-child class,employee-base/super/parent class (INHERITANCE)
public:
    string favlanguage;
};
int main(){
    employee emp1 = employee("raaina","google",31);
    employee emp2= employee("priya","amazon",25);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}