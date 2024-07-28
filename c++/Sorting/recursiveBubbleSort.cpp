#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    if(n == 1) return;
    int swap = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swap = 1;
        }
    }
    if(swap == 0) return;
    cout<<"Run";
    bubbleSort(arr, n - 1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}