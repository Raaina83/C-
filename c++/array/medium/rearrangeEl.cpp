#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//LEETCODE

vector<int> reaArrange(vector<int>&nums) {
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        if(nums[i] > 0) pos.emplace_back(nums[i]);
        else neg.emplace_back(nums[i]);
    }

    if(pos.size() > neg.size()) {
        for(int i = 0; i < neg.size(); i++) {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }

        int idx = neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++) {
            ans[idx] = pos[i];
            idx++;
        }
    }

    else {
        for(int i = 0; i < pos.size(); i++) {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }

        int idx = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++) {
            ans[idx] = neg[i];
            idx++;
        }
    }
    return ans;
}

int main() {
    vector<int> inp = {2,3,-4,-1,5,3,4,-8, -6, -2,-4};
    vector<int> ans = reaArrange(inp);
    for(auto it:ans) {
        cout<<it<<" ";
    }
    return 0;
}