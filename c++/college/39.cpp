#include<iostream>
using namespace std;

class base{
    protected:
    int varB=10;
    public:
    virtual void  display(){
        cout<<"value of variable of base class:"<<varB<<endl;
    }
};

class derived: public base{
    protected:
    int varD=23;
    public:
    void display(){
        cout<<"Value of variable of base class:"<<varB<<endl;
        cout<<"Value of variable of derived class:"<<varD<<endl;
    }
};

int main(){
    base *p;
    derived obj;
    p = &obj;
    p->display();
    return 0;
}