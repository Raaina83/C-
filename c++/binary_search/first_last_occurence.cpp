#include<iostream>
using namespace std;

int leftmost(int arr[],int size,int key);
int rightmost(int arr[],int size,int key);

int main(){
    int arr[10]={1,2,2,3,3,3,3,3,4,5};
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    cout<<leftmost(arr,10,key)<<endl;
    cout<<rightmost(arr,10,key);
}

int leftmost(int arr[],int size,int key){
    int s,e,mid,ans=-1;
    s=0;
    e=size-1;
    mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
            mid=(s+e)/2;
    }
    return ans;
}
int rightmost(int arr[],int size,int key){
    int s,e,mid,ans=-1;
    s=0;
    e=size-1;
    mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;

    }
    return ans;
}
