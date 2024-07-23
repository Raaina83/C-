#include<iostream>
using namespace std;

class employee{ //ARRAYS OF OBJECTS
    int id;
    int salary;
public:
    void setid(){
        cout<<"enter id"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    employee emp[5];
    for(int i=0;i<5;i++){
    emp[i].setid();
    emp[i].getid();
    }
    return 0;
}