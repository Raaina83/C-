#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//LEETCODE

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = INT_MIN;
    for(auto it: nums) {
        sum += it;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    } 
    return maxi;
}