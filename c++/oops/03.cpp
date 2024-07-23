#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class employee:AbstractEmployee{
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
int main(){
    employee emp1 = employee("raaina","google",18);
    employee emp2= employee("priya","amazon",18);
    emp1.intoduction();
    emp2.intoduction();
    emp1.setage(15);
    emp1.setname("raaina");
    cout<< emp1.getname()<<" is "<<emp1.getage()<<" years old"<<endl;
    return 0;
}