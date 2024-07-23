#include<iostream>
using namespace std;

int getMax(int arr[],int n);

int main(){
    int arr[10]={15,25,37,40,52,68,71,39,88,20};
    cout<<getMax(arr,10);
}

int getMax(int arr[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}