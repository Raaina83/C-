#include<iostream>
using namespace std;

class Demo{
    // int x,y;
    public:
    void add(int a,int b){
        cout<<(a+b)<<endl;
    }

    void add(double a, double b){
        cout<<(a+b)<<endl;
    }
};

int main(){
    Demo obj;
    obj.add(3,4);
    obj.add(4.455,7.789);
    return 0;
}