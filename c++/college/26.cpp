#include<iostream>
using namespace std;

class value{
    int a,b;
    public:
    value(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"Value of a and b is "<<a<<" and "<<b<<endl;
    }
};

int main(){
    value obj1(12,45);
    obj1.display();
    return 0;
}