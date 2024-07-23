#include <iostream>
using namespace std;

class calculator{
    int a,b;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;

    }
    void display(){
        cout<<"the addition of numbers :"<<a+b<<endl;
        cout<<"the subtraction of numbers :"<<a-b<<endl;
        cout<<"the multiplication of numbers :"<<a*b<<endl;
        cout<<"the division of numberes :"<<a/b<<endl;
        cout<<"the remainde :"<<a%b<<endl;
    }
};
int main(){
    calculator C;
    int a,b;
    cout<<"enter two numbers :"<<endl;
    cin>>a>>b;
    C.getdata(4,7);
    C.display();
}