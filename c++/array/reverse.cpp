#include<iostream>
using namespace std;

void reverse(int arr[], int size);
void printarr(int arr[],int size);

int main(){
    int arr[5]={1,3,5,7,9};
    printarr(arr,5);
    cout<<"Starting reverse"<<endl;
    reverse(arr,5);
    printarr(arr,5);
}

void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}