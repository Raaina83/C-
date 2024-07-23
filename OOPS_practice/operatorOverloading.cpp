#include<iostream>
using namespace std;

class test{
    int x,y;
    public:
    test(int x,int y){
        this->x = x;
       this->y = y; 
    }

    void operator+(){
        x++;
        y++;
    }

    void display(){
        cout<<"X: "<<x<<endl;
        cout<<"y:  "<<y<<endl;
    }
};

int main(){
    test obj1(23,67);
    obj1.display();
    +obj1;
    obj1.display();
    return 0;
}