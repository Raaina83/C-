#include<iostream>
using namespace  std;

class Demo
{
public:
    int x;
    Demo add(Demo obj1, Demo obj2){
        Demo obj3;
        obj3.x = obj1.x + obj2.x;
        return obj3;
    }

    void print(){
        cout<<"Value: "<<x<<endl;
    }
};

int main(){
    Demo obj1,obj2,obj3;
    obj1.x=10;
    obj2.x=19;
    obj3.x=0;
    obj1.print();
    obj2.print();
    obj3.print();
    cout<<endl;

    obj3 = obj3.add(obj1,obj2);
    obj1.print();
    obj2.print();
    obj3.print();
    return 0;
}