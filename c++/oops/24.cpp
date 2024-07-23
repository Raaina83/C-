#include<iostream>
using namespace std;
//MULTIPLE INHERITANCE WITH 2 BASE CLASSES!!
class Base1{
    protected :
    int base1val;
    public:
    void setbase1val(int a){
        base1val=a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void setbase2int(int b){
        base2int=b;
    }
};

class Derived:public Base1, public Base2{
    public:
    void display(){
        cout<<"The value of base1 is"<<base1val<<endl;
        cout<<"the value of base2 is "<<base2int<<endl;
        cout<<"Sum of these values is"<<base1val+base2int<<endl;
    }
};

int main(){
    Derived raaina;
    raaina.setbase1val(25);
    raaina.setbase2int(47);
    raaina.display();
    return 0;
}