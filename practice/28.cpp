#include<iostream>
using namespace std;

bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    std::cout<<"Enter number:"<<endl;
    cin>>num;
    if(prime(num)==1){
        std::cout<<num<<" is prime!";
    }
    else
    std::cout<<num<<" is not prime";
    return 0;
}