#include<iostream>
using namespace std;

class Circle{
    int radius;
    public:
    void circumference(int r){
        radius=r;
    }
    void display(){
        cout<<"Circumference of circle is "<<2*3.14*radius<<endl;
    }
};

int main(){
    Circle c1;
    c1.circumference(4);
    c1.display();
}