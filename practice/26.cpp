#include<iostream>
using namespace std;

bool isEven(int num){
    if(num%2==0){
    return 1;
    }
    return 0;
}

int main(){
    int num;
    std::cout<<"Enter number: "<<endl;
    cin>>num;
    if(isEven(num)==1){
        std::cout<<"The number is even"<<endl;
    }
    else
    std::cout<<"The number is odd";
}