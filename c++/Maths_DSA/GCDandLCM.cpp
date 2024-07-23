#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long> lcmAndGcd(long long A , long long B) {
    long long dupA = A;
    long long dupB = B;
        vector<long long> v;
        long long gcd = 0;
        while(A >0 && B> 0) {
            if(A >= B) A = A%B;
            else B = B%A;
        }
        if(A==0) gcd = B;
        else gcd = A;
        
        long long lcm = (dupA*dupB)/gcd;
        
        v.emplace_back(lcm);
        v.emplace_back(gcd);
        
        return v;
}

int main(){
    vector<long long> res;
    res = lcmAndGcd(5,10);
    cout<<res[0]<<" "<<res[1];
    return 0;
}