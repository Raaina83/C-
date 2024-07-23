#include<iostream>
using namespace std;

class Out{
    int x;
    public:
    class NestedClass
    {
    private:
        int y;
    public:
        NestedClass(int a){
            y = a;
            cout<<"y: "<<y<<endl;
        };
    };

    Out(int a){
        x = a;
        cout<<"x: "<<x<<endl;
    }
    
};

int main(){
    Out obj1(12);
    Out::NestedClass obj2(10);
    return 0;
}