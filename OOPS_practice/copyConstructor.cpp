#include<iostream>
using namespace std;

class test{
    int x;
    public:
    test(int a){
        x = a;
    }

    test(test &obj){
        x = obj.x;
    }

    void display(){
        cout<<"x: "<<x<<endl;
    }
};

int main(){
    test obj1(4);
    obj1.display();

    test obj2(obj1);
    obj2.display();
}