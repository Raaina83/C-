#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    vector<bool> prime(n+1,true); //n+1=a,n=a-1
    int count=0;
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
        }
        for(int j=i*2;j<n;j=j+i){
            prime[j]=false;
        }
    }
    return count;
}

int main(){
    int a;
    cin>>a;
    cout<<countPrime(a);
}