#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A class constructor called"<<endl;
    }
};

class B:virtual public A{
    public:
    B(){
        cout<<"B class constructor called"<<endl;
    }
};

class C: public A{
    public:
    C(){
        cout<<"C class constructor called"<<endl;
    }
};

class D: public B,virtual public A{
    public:
    D(){
        cout<<"D class constructor called"<<endl;
    }
};

int main(){
    D obj;
}