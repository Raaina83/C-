#include<iostream>
using namespace std;

int printArray(int arr[],int size);
int selectionSort(int arr[],int size); //TIEM COMPLEXITY(WORST AND BEST CASE)=O(n^2)

int main(){
    int arr[5]={64,25,12,22,11};
    cout<<"Before Sorting:  ";
    printArray(arr,5);
    cout<<endl;
    cout<<"After Sorting:   ";
    selectionSort(arr,5);
    return 0;
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int selectionSort(int arr[],int size){ 
    for(int i=0;i<size-1;i++){
        int minidx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minidx]){
                swap(arr[minidx],arr[j]);
            }
        }
    }
    printArray(arr,size);
}