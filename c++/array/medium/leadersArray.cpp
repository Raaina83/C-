#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//LEETCODE

vector<int> leaders(int n, int arr[]) {
        int maxi = -1;
        vector<int> ans;
        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] >= maxi) {
                ans.emplace_back(arr[i]);
                maxi = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }