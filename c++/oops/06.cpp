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
    virtual void work(){ //POLYMORPHISM-the most common use of polym is when a parent class reference is used to refer to a child class object!!
        cout<<getname()<<" is doing work"<<endl;
    }
};

class developer:public employee{ //developer-child class,employee-base/super/parent class (INHERITANCE)
public:
    string favlanguage;
    developer(string n,string c,int a,string favlang):employee(n,c,a){
    favlanguage=favlang;
    }
    void fixbug(){
        cout<<getname()<<" fixed bug using "<<favlanguage<<endl;
    }
    void work(){
        cout<<getname()<<" is writing codes in "<<favlanguage<<endl;
    }
};

class teacher:public employee{
public:    
    string subject;
    void preparelesson(){
    cout<<getname()<<" is preparing "<< subject<<" lesson!"<<endl;
    }
    teacher(string n,string c,int a,string sub):employee(n,c,a){
    subject=sub;
    }
    void work(){
        cout<<getname()<<" is taking "<<subject<<" class"<<endl;
    }
};
int main(){
    developer d1=developer("raaina","google",25,"c++");
    teacher t1=teacher("preti","oxford",31,"computer");
    employee *e1=&d1;
    employee *e2=&t1;
    d1.work();
    t1.work();
    e1->work();
    e2->work();
    return 0;
}