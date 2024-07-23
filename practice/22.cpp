#include<iostream>
using namespace std;

int main(){
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<10;i++){
       int nextnum= a+b;
       cout<<nextnum<<endl;

       a=b;
       b=nextnum;
    }
}