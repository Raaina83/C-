#include<iostream>
using namespace std;
//SINGLE INHERITANCE
class Base{
    int data1;
    public:
       int data2;
       void setdata1(){
        data1=10;
       }
       void setdata2(){
        data2=20;
       }
       int getdata1(){
        return data1;
       }
};

class Derived:public Base{
    int data3;
    public:
    void process(){
        data3=data2 * getdata1();
    }
    void display(){
        cout<<"The value of data 1 is "<<getdata1()<<endl;
        cout<<"The value of data 2 is "<<data2<<endl;
        cout<<"The value of data 3 is "<<data3<<endl;
    }
};
//ytttttttyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy
int main(){
    Derived d1;
    d1.setdata1();
    d1.setdata2();
    d1.process();
    d1.display();
    return 0;
}