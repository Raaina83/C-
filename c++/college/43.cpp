#include<iostream>
using namespace std;

class t{
    int a,b;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void  operator+(){
        a++;
        b++;
    }
    void disp(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main(){
    t obj;
    obj.get(4,6);
    obj.disp();
    +obj;
    obj.disp();
    return 0;
}