#include<iostream>
using namespace std;

void alt_Swap(int arr[],int size);
void printarr(int arr[],int size);
int main(){
    int arr[6]={2,4,6,8,10,12};
    printarr(arr,6);
    cout<<endl;
    cout<<"Staring alternative swap"<<endl;
    alt_Swap(arr,6);
    printarr(arr,6);
    return 0;
}

void alt_Swap(int arr[],int size){
    for(int i=0;i+1<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}