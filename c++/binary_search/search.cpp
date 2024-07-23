#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int s,e,mid;
    s=0;
    e=size-1;
    mid=(s+e)/2;
    while (s<=e)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    cout<<"The key is present at index: "<<binarySearch(arr,10,key);
}