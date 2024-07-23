#include<iostream>
using namespace std;

class Base{
    protected:
        int a;//CAN BE INHERITED!!(still like private)
    private:
        int b;
};
//PROTECTED AND PUBLIC MEMBERS WILL BECOME PROTECTED AFTER INHERITING THEM IN PROTECTED MODE!!

class Derived:protected Base{
    
};

int main(){ 
    Base b;
    Derived d;
    // cout<<b.a<<endl<<d.a; WILL NOT WORK
}