#include<iostream>
using namespace std;

int insrtSort(int arr[],int size); //TIME COMPLEXITY(WORST CASE)=O(n^2)
int printArray(int arr[],int size);

int main(){
    int arr[8]={10,1,7,4,8,2,12,11};
    cout<<"Before Sorting:  ";
    printArray(arr,8);
    insrtSort(arr,8);
    cout<<endl<<"After Sorting:  ";
    printArray(arr,8);
}

int insrtSort(int arr[],int size){ //BEST CASE TC=O(n)
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            } else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}