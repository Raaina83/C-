#include<iostream>
using namespace std;
//Pointer to derived class!!
class base{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
    }
};

class Derived:public base{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
        cout<<"Dsiplaying derived class variable "<<var_derived<<endl;
    }
};

int main(){
    base *base_pointer;
    base obj_base;
    Derived obj_derived;
    base_pointer= &obj_derived; //Pointing base class pointer to derived class object!
    base_pointer->var_base=45;
    base_pointer->display();
}