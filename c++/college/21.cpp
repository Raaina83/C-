#include <iostream>
using namespace std;
class circle{
    int radius;
    public:
    void circumference(int r){
        radius=r;
    }
    void display(){
        cout<<"area of circle"<<2*3.14*radius<<endl;
    }
};
int main(){
circle obj;
obj.circumference(3);
obj.display();
}