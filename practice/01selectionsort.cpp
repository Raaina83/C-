#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-2; i++){
        int minIdx = i;
        for(int j=i; j<n-1; j++){
            if(arr[j]<arr[minIdx]) minIdx = j;
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}