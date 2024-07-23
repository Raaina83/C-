#include<iostream>
using namespace std;

class test{
    int x,y;
    public:
    test(int x=0,int y=0){
        this->x = x;
       this->y = y; 
    }

    test operator+(test &obj){
        test temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }

    void display(){
        cout<<"X: "<<x<<endl;
        cout<<"y:  "<<y<<endl;
    }
};

int main(){
    test obj1(23,67);
    test obj2(12,45);
    test obj3;
    obj3.display();
    obj3 = obj1+obj2;
    obj3.display();
    return 0;
}