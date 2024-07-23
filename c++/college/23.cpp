#include<iostream>
using namespace std;

class Calculator{
    int a,b;
    public:
    void getData(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"Addition of two numbers is "<<a+b<<endl;
        cout<<"Subtraction of two numbers is "<<a-b<<endl;
        cout<<"Multiplication of two numbers is "<<a*b<<endl;
        cout<<"Division of two numbers is "<<a/b<<endl;
        cout<<"Remainder of two numbers is "<<a%b<<endl;
    }
};

int main(){
    Calculator c1;
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    c1.getData(a,b);
    c1.display();
    return 0;
}