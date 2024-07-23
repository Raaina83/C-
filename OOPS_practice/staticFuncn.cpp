#include<iostream>
using namespace std;

class Box{
    static int length;
    static int breadth;
    public:
    static int print(){ //can only access static data members!!
        cout<<"Lenght: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    } 
};

int Box::length = 120; //by deafult value 0, always explicitly declare static data members like this!!
int Box::breadth = 40;

int main(){
    Box obj;
    obj.print(); //calling print through object
    Box::print();// calling print through classname
}