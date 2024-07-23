#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        // char print=i+'A'-1;
        for(int j=1;j<=i;j++){
            char a=i+'A'-1;
            cout<<a;
        }
        cout<<endl;
    }
}