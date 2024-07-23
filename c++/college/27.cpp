#include<iostream>
using namespace std;

class student{
    int rollNo,a,b,c,d,e;
    public:
    void rollNO(){
        // int x;
        cout<<"Enter your roll number:";
        cin>>rollNo;
        // rollNo=x;
    }
    void marks(){
        // int a,b,c,d,e;
        cout<<"Enter your marks for Maths:"<<endl;
        cin>>a;
        cout<<"Enter your marks for physics:"<<endl;
        cin>>b;
        cout<<"Enter your marks for Chemistry:"<<endl;
        cin>>c;
        cout<<"Enter your marks for DSA:"<<endl;
        cin>>d;
        cout<<"Enter your marks for OOPS:"<<endl;
        cin>>e;
    }

    void display(){
        cout<<"Marks for Roll Number "<<rollNo<<" are as follows:"<<endl;
        cout<<"Maths:"<<a<<endl;
        cout<<"Physics:"<<b<<endl;
        cout<<"Chemistry:"<<c<<endl;
        cout<<"DSA:"<<d<<endl;
        cout<<"OOPS:"<<e;
    }
};

int main(){
    student s1;
    s1.rollNO();
    s1.marks();
    cout<<endl;
    s1.display();
    return 0;
}