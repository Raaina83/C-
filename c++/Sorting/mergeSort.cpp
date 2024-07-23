#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainIdx=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIdx++];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIdx++];
    }
    int idx1=0,idx2=0;
    mainIdx=s;
    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2]){
            arr[mainIdx++]=first[idx1++];
        }
        else{
            arr[mainIdx++]=second[idx2++];
        }
    }
    while(idx1<len1){
        arr[mainIdx++]=first[idx1++];
    }
    while(idx2<len2){
        arr[mainIdx++]=second[idx2++];
    }
}
void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid); //left part ko sort karega
    mergeSort(arr,mid+1,e); //right part to sort karega
    merge(arr,s,e);
}
int printArr(int *arr,int l){
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7]={38,27,43,3,9,82,10};
    int n=7;
    printArr(arr,n);
    mergeSort(arr,0,n-1);
    printArr(arr,n);
}