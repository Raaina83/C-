#include<iostream>
using namespace std;
//DEFAULT ARGUMENTS IN CONSTRUCTOR!!
class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b=7){
        data1=a;
        data2=b;
    }
    void printData(){
        cout<<"the value of data1 and data2 is "<<data1<<" ,"<< data2<<endl;
    }
};

int main(){
    simple s1(5);
    s1.printData();
    simple s2(4,10);
    s2.printData();
    return 0;
}