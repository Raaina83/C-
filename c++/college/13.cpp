#include<iostream>
using namespace std;

class Computer{
    int h,s;
    public:
    void setData(int x,int y){
        h=x;
        s=y;
    }
    void dispData(){
        cout<<"Value of a is "<<h<<endl;
        cout<<"Value of b is "<<s<<endl;
    }
};

int main(){
    Computer obj;
    obj.setData(10,7);
    obj.dispData();
}