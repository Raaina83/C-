#include<iostream>
using namespace std;

int mergeArr(int arr1[],int n,int arr2[],int m,int arr3[]);
int printArr(int arr[],int size);

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8];
    mergeArr(arr1,5,arr2,3,arr3);
    printArr(arr3,8);
}

int mergeArr(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++]; 
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    // copy remaining elements from 1st array(if left)
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

int printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}