#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    test(int x,int y){
        a=x;
        b=y;
    }

    friend class Demo;
};

class Demo{
    public:
    void print(test obj){ //can access private and protected data members and functions
        cout<<"Private data(a): "<<obj.a<<endl;
        cout<<"Private data(b): "<<obj.b<<endl;
    }
};

int main(){
    test obj1(9,4);
    Demo obj2;
    obj2.print(obj1);
    return 0;
}