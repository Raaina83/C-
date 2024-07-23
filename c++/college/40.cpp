#include<iostream>
using namespace std;

class A{
    int item,price;
    public:
    A(int a,int b){
        price=a;
        item=b;
    }
    A(A &t){
        price= t.price;
        item= t.item; 
    }
    void disp(){
        cout<<"Price is: "<<price<<endl;
        cout<<"Item Number is :"<<item<<endl;
    }
};

int main(){
    A obj1(50,101);
    A obj2(obj1);
    obj1.disp();
    obj2.disp();
}
