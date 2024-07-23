#include<iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    cout<<fibonacci(n);
}

int fibonacci(int n){
    int a,b,next;
    a=0;
    b=1;
    for(int i=0;i<n;i++){
        next=a+b;
        a=b;
        b=next;
    }
    return next;
}