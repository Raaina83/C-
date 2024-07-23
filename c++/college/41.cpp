#include<iostream>
using namespace std;

class A{
    public:
    virtual void disp()=0;
};

class B: public A{
    public:
    virtual void disp(){
        cout<<"Hello"<<endl;
    }
};

int main(){
    A *p;
    B obj;
    p= &obj;
    p->disp();
    obj.disp();
    return 0;
}