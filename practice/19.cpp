#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=i-1;
        for(space;space>0;space--){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            char a='1'+i-1;
            cout<<a;
        }
        cout<<endl;
    }
}