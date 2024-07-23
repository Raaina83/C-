#include<iostream>
#include<math.h>
using namespace std;

bool power2(int n);

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(power2(n)){
        cout<<"true";
    }
    else
    cout<<"False";
}

bool power2(int n){
    int ans=1;
    for(int i=0;i<30;i++){
        ans=pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}