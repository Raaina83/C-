#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void display();
    class B{
        public:
        void display();
    };
};

void A::display(){
    cout<<"Object of Outer class"<<endl;
}

void A::B::display(){
    cout<<"Object of Inner class"<<endl;
}

int main(){
    A obj1;
    A::B obj2;
    obj1.display();
    obj2.display();
    return 0;
}