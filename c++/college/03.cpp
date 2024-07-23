#include<iostream>
using namespace std;

int deletion(int arr[],int size,int idx);
int printArray(int arr[],int size);

int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    printArray(arr,size);
    deletion(arr,size,5);
    size=size-1;
    cout<<endl;
    printArray(arr,size);
    return 0;
}

int deletion(int arr[],int size,int idx){
    for(int i=idx;i<size;i++){
        arr[i]=arr[i+1];
    }
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}