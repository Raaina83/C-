#include<iostream>
using namespace std;
// AUTOMATICALYY INVOKED

class complex{
    int a,b;
    public:
    // complex(void){ DEFAULT CONSTRUCTOR(AUTOMATICALLY INVOKED)
    //     a=10;
    //     b=0;
    // }
    complex(int a1,int b1){ //PARAMETRIZED CONSTRUCTOR-TAKES PARAMETERS
    a=a1;
    b=b1;
    } //CONSTRUCTOR-SAME NAME AS CLASS,USED TO INITIALIZE OBJECTS,DOES NOT HAVE RETURN TYPE,CANNOT REFER TO THEIR ADDRESS
     void getnumber(){
    cout<<"the number is "<< a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex a(3,8); //IMPLICIT CALL
    a.getnumber();
    complex o1=complex{10,5}; //EXPLICIT CALL
    o1.getnumber();
    return 0;
}