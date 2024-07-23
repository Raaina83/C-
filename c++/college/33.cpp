#include<iostream>
using namespace std;

class data{
    int id;
    char name[20];
    public:
    void getData(){
        cout<<"Enter the employee id:"<<endl;
        cin>>id;
        cout<<"Enter the employee name:"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"The name of employee with id number "<<id<<" is "<<name<<endl;
    }
};

int main(){
    data call[10];
    int n;
    cout<<"Enter the number of objects(<10):"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        call[i].getData();
    }
    for(int i=0;i<n;i++){
        call[i].display();
    }
    return 0;
}