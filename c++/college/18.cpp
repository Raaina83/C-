#include<iostream>
using namespace std;

class Area{
    int area;
    public:
    void arr(int a,int b){
        area=a*b;
    }
    void arr(int a){
        area=a*a;
    }
    void display(){
        cout<<"Area of polygon is "<<area<<endl;
    }
};

int main(){
    Area square,rectangle;
    square.arr(3);
    square.display();
    // rectangle.arr(3,4);
    // rectangle.display();
    return 0;
}