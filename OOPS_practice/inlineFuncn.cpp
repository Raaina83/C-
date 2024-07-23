#include<iostream>
using namespace std;

inline int add(int a,int b){
    return (a+b);
}

int main(){
    int a,b;
    cout<<"Enter two values  ";
    cin>>a>>b;
    cout<<add(a,b); //function is getting copied here insted of program jumping to the function!
    return 0;
}