#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0;
        int j = 0;
        vector<int> unionArr;
        while(i < n && j < m) {
            if(arr1[i] <= arr2[j]) {
                if(unionArr.size() == 0 || unionArr.back() !=arr1[i]) {
                    unionArr.emplace_back(arr1[i]);
                }
                i++;
            }
            else {
                if(unionArr.size() == 0 || unionArr.back() !=arr2[j]) {
                    unionArr.emplace_back(arr2[j]);
                }
                j++;
            }
        }
        while(j < m) {
            if(unionArr.size() == 0 || unionArr.back() !=arr2[j]) {
                unionArr.emplace_back(arr2[j]);
            }
            j++;
        }
        while(i < n) {
            if(unionArr.size() == 0 || unionArr.back() !=arr1[i]) {
                unionArr.emplace_back(arr1[i]);
            }
            i++;
        }
        return unionArr;
    }


int main() {
    int n1, n2;
    cin>>n1;
    int arr1[n1];
    for(int i = 0; i<n1; i++) {
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i = 0; i<n2; i++) {
        cin>>arr2[i];
    }
    vector<int> u = findUnion(arr1, arr2, n1, n2);
    for(auto i:u) {
        cout<<i<<" ";
    }
    return 0;
}