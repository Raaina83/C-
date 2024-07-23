#include<iostream>
using namespace std;

int peak(int arr[],int size);

int main(){
    int arr[10]={0,1,2,3,4,5,4,3,2,1};
    cout<<"The index of peak element is: "<<peak(arr,10);
}

int peak(int arr[],int size){
    int s,e,mid;
    s=0;
    e=size-1;
    mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}