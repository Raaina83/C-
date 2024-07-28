#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] > pivot && j>= low + 1) {
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int partition = f(arr, low , high);
        qs(arr, low, partition - 1);
        qs(arr, partition + 1, high);
    }
}

int main() {
    vector<int> arr;
    arr.emplace_back(4);
    arr.emplace_back(6);
    arr.emplace_back(1);
    arr.emplace_back(7);
    arr.emplace_back(2);
    arr.emplace_back(3);    
    qs(arr, 0, arr.size()-1);
    for(int i =0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}