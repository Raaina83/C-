#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char a='A'+n-1-i+j;
            cout<<a;
        }
        cout<<endl;
    }
}