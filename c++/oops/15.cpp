#include<iostream>
using namespace std;
//CONSTRUCTOR OVERLOADING
class Add{
    int a,b,c;
    public:
    Add(int x){
        a=x;
        b=10;
        c=4;
    }
    Add(int x,int y){
        a=x;
        b=y;
        c=9;
    }
    Add(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void print(){
        cout<<"the value of a,b and c are:"<< a<<","<<b<<" and "<<c<<endl;
    }
};

int main(){
    Add a1=Add(5);
    a1.print();
    Add a2(3,4);
    a2.print();
    Add a3(1,2,6);
    a3.print();
    return 0;
}