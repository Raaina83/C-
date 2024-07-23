#include<iostream>
using namespace std;

int factorial(int n);
int nCr(int n,int r);
int main(){
    cout<<factorial(13);
    return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int num=factorial(n);
    int denm=(factorial(r))*(factorial(n-r));
    return num/denm;
}