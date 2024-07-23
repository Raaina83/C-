#include<iostream>
using namespace std;

class t{
    int a,b;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    t  operator+(t &obj){
        t temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    void disp(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main(){
    t obj1;
    t obj2;
    obj1.get(3,9);
    obj2.get(8,10);
    t obj3 = obj1 + obj2;
    obj3.disp();
    return 0;
}