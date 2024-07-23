#include<iostream>
using namespace std;
//POINTERS TO OBJECTS AND ARROW OPERATOR
class Complex{
    int real,imaginary;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
};

int main(){
    Complex *ptr= new Complex;
    //(*ptr).setdata(67,45); is same as:
    ptr->setdata(45,67);
    // (*ptr).getdata(); is same as:
    ptr->getdata();

    Complex *ptr1= new Complex[4]; //array
    ptr1->setdata(1,2);
    ptr1->getdata();
    (ptr1+1)->setdata(3,4);
    (ptr1+1)->getdata();
    return 0;
}