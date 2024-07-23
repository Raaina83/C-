#include<iostream>
using namespace std;

int reverse(int n);

int main(){
    int n;
    cout<<"Enter the number you want to reverse:"<<endl;
    cin>>n;
    cout<<"The reversed number is "<<reverse(n)<<endl;
}
int reverse(int n){
    int ans=0;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        if(ans>INT32_MAX/10){ //FOR THE LEETCODE QUESTION
            return 0;
        }
        if(ans<INT32_MIN/10){
            return 0;
        }
        ans=(ans*10)+digit;
    }
    return ans;
}