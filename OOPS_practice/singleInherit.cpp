#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    Base(){
        cout<<"base class constructor called"<<endl;
    }
};

class Derived: public Base{
    public:
    Derived(){
        cout<<"Derived constructor called"<<endl;
    }
};

int main(){
    Derived d1;
}