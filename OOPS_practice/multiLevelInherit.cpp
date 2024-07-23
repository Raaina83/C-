#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A class constructor called"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"B class constructor called"<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<"C class constructor called"<<endl;
    }
};

int main(){
    C obj;
}