#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }

    void get(){
        cout<<"Sum is "<<a+b<<endl;
    }
};

int main(){
    test obj;
    obj.set(13,29);
    obj.get();
    return 0;
}