#include<iostream>
using namespace std;
//COPY CONSTRUCTOR
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    //EVEN IF NO COPY CONSTRUCTOR IS FOUND,COMPILER MAKE ITS OWN COPY CONSTRUCTOR
    number(number &obj){ //COPY CONSTRUCTOR
        cout<<"calling copy contructor"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"your number is "<<a<<endl;
    }
};

int main(){
    number z2, x,y,z(45);
    number z1(z);//COPY CONSTRUCTOR EVOKED
    z1.display();
    z2=z;//COPY CONSTRUCTOR NOT CALLED
    z2.display();
    number z3=z;//COPY CONSTRUCTOR EVOKED
    z3.display();
}