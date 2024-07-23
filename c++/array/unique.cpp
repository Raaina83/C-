#include<iostream>
using namespace std;

int unique(int arr[], int size);

int main(){
    int arr[11]={1,3,2,5,3,4,4,1,2,7,5};
    cout<<unique(arr,11)<<" is the unique element";
}

int unique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}