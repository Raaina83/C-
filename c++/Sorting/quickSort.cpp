#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;

    //elements less than pivot element
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    //right position of pivot element
    int pivotIdx = s + count;
    swap(arr[s],arr[pivotIdx]);

    int i=s,j=e;
    //left and right ko sort karna
    while(i<pivotIdx && j>pivotIdx){
        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i],arr[j]);
        }
    }

    return pivotIdx;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }

    //partition
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}



int main(){
    int arr[10] = {3,9,4,5,2,7,18,13,1,9};
    int n=10;
    printArray(arr,n);
    cout<<endl;
    quickSort(arr,0,n-1);
    printArray(arr,n);
}