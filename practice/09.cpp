#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char print='A'+i-1;
            cout<<print;
            // print++;
        }
        cout<<endl;
    }
}