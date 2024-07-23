#include<iostream>
using namespace std;
//DESTUCTOR-NEVER TAKES ARGUMENT NOR RETURN ANY VALUES
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is when constuctor is called for number"<<count<<endl;
    }
    ~num(){
        cout<<"this is when destructor is called for number"<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"entering main function"<<endl;
    cout<<"creating an object"<<endl;
    num n1;
    {   //BLOCK-ANYTHING MADE INSIDE IT IS DESTROYED AFTER BLOCK EXITS!!
        cout<<"entering the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting the block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}