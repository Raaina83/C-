#include<iostream>
using namespace std;

int insert(int arr[],int size,int idx);
int printArray(int arr[],int size);

int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    printArray(arr,size);
    insert(arr,size,5);
    size=size+1;
    cout<<endl;
    printArray(arr,size);
    return 0;
}

int insert(int arr[],int size,int idx){
    for(int i=size-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=34;
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}