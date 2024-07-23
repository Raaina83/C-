#include<iostream>
using namespace std;

class B;

class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    friend void sum(A obj,B obj1);
};

class B{
    int a;
    public:
    B(int x){
        a=x;
    }
    friend void sum(A obj,B obj1);
};

void sum(A obj,B obj1){
    cout<<"Sum: "<<(obj.a+obj1.a)<<endl;
}

int main(){
    A obj(5);
    B obj1(8);
    sum(obj,obj1);
    return 0;
}