#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setData(int a){
        //a=a; Will give a garbage value as local variable takes precedence over class variable!
        this->a=a; //this points to the class1
    }
    void getData(){
        cout<<a;
    }
};

int main(){
    A me;
    me.setData(4);
    me.getData();
}