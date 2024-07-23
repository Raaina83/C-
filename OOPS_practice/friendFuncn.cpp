#include<iostream>
using namespace std;
class Demo;

class Test{
    private:
    int x = 34;
    public:
    friend void display(Test &obj1, Demo &obj2);
};

class Demo{
    int y=13;
    public:
    friend void display(Test &obj1, Demo &obj2);
};

void display(Test &obj1, Demo &obj2){
    cout<<"Private variable of test: "<<obj1.x<<endl;
    cout<<"Private variable of demo: "<<obj2.y<<endl;
}

int main(){
    Test obj1;
    Demo obj2;
    display(obj1,obj2);
    return 0;
}