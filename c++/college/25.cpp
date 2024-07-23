#include<iostream>
using namespace std;

class Polygon{
    int l,b;
    public:
    Polygon(int x,int y){
        l=x;
        b=y;
    }
    Polygon(int x){
        l=b=x;
    }
    void area(){
        cout<<"Area of polygon is "<<l*b<<endl;
    }
};

int main(){
    Polygon rectangle(12,4);
    rectangle.area();
}