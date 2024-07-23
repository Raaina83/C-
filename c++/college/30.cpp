#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;
        b=y;
    }
    friend void display(A obj);
};

void display(A obj){
    cout<<"Sum of a and b is:"<<(obj.a+obj.b)<<endl;
}

int main(){
    A obj1(4,9);
    display(obj1);
    return 0;
}