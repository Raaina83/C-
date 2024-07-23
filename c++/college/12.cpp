#include<iostream>
using namespace std;

class Demo{
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main(){
    Demo obj;
    obj.setData(3,8);
    obj.getData();
}