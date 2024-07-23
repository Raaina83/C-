#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    char print='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<print;
            print++;
        }
        cout<<endl;
    }
}