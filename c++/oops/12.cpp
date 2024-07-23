#include<iostream>

class complex{
    int a,b;
public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void getnumber(){
        std ::cout<<"the number is"<<a<<" + "<<b<<"i"<<std ::endl;
    }
    friend complex sumnumber(complex o1,complex o2); //THIS DECLARES A NON MEMBER FUNCTION IS ALLOWED TO USE PRIVATE MEMBERS!!

complex sumnumber(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
};

int main(){
    complex c1,c2,sum;
    c1.setnumber(2,5);
    c2.setnumber(4,9);
    c1.getnumber();
    c2.getnumber();
    sum=sumnumber(c1,c2);
    sum.getnumber();
    return 0;
}
