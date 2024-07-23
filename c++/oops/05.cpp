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

class developer:public employee{ //developer-child class,employee-base/super/parent class (INHERITANCE)
public:
    string favlanguage;
    developer(string n,string c,int a,string favlang):employee(n,c,a){
    favlanguage=favlang;
    }
    void fixbug(){
        cout<<getname()<<" fixed bug using "<<favlanguage<<endl;
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
};
int main(){
    developer d1=developer("raaina","google",25,"c++");
    d1.fixbug();
    d1.AskForPromotion();
    teacher t1=teacher("preti","oxford",31,"computer");
    t1.intoduction();
    t1.preparelesson();
    t1.AskForPromotion();
    return 0;
}