#include<iostream>
using namespace std;

int HCF(int a,int b){
    if(a==0)
    return b;

    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"enter values for a and b "<<endl;
    cin>>a>>b;
    cout<<"HCF of a and b is "<<HCF(a,b);
}