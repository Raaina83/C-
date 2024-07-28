#include<iostream>
using namespace std;

void insertionSort(int arr[], int i, int n) {
    if(i == n) {
        return;
    }
    int j = i;
    while(j > 0 && arr[j] < arr[j-1]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        j--;
    }
    insertionSort(arr, i+1, n);
} 

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    insertionSort(arr, 1, n);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}