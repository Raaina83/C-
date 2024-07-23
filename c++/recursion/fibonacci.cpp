#include<iostream>
using namespace std;

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n,ans;
    cout<<"Enter a number:";
    cin>>n;
    ans = fib(n);
    cout<<"Fibonnaci of "<<n<<" is "<<ans;
}