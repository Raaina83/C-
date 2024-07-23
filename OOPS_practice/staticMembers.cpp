#include<iostream>
using namespace std;

class Test{
    public:
    static int count;
    Test(){
        cout<<"Initialized object with count:  "<<count<<endl;
        count++;
    }

    ~Test(){
        cout<<"Destructor called with count: "<<count<<endl;
    }

    void print(){
        cout<<"count: "<<count<<endl;
    }
};

int Test::count = 1;

int main(){
    Test obj1[5];
    for(int i=0;i<5;i++){
        obj1[i].print();
    }
    return 0;
}