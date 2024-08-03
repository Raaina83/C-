#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//LEETCODE

vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        bool bit = 0;
        vector<int> ans;
        while(i < nums.size() || j < nums.size()) {
            if(bit == 0 ) {
                if(i < nums.size() && nums[i] > 0) {
                    ans.emplace_back(nums[i]);
                    bit = 1 - bit;
                }
                cout<<i<<' ';
                i++;
            }
            else {
                if(j < nums.size() && nums[j] < 0) {
                    ans.emplace_back(nums[j]);
                    bit = 1 - bit;
                }
                cout<<j<<" ";
                j++;
            }
        }
        cout<<"bjkdgeu";
        return ans;
    }

int main() {
    vector<int> v = {-1, 1};
    // for(auto it:v) {
    //     cout<<it<<" ";
    // }
    vector<int> ans = rearrangeArray(v);
    for(auto it:ans) {
        cout<<it<<" ";
    }
}

// vector<int> rearrangeArray(vector<int>& nums) {
//         int i = 0;
//         int j = 0;
//         bool bit = 0;
//         vector<int> ans;
//         while(i < nums.size() || j < nums.size()) {
//             if(i <nums.size() && bit == 0 ) {
//                 if( nums[i] > 0) {
//                     ans.emplace_back(nums[i]);
//                     bit = 1 - bit;
//                 }
//                 if(i == nums.size() - 1) continue; 
//                 i++;
//             }
//             if(bit == 1 && j < nums.size()) {
//                 if(nums[j] < 0) {
//                     ans.emplace_back(nums[j]);
//                     bit = 1 - bit;
//                 }
//                 if(j == nums.size() - 1) continue; 
//                 j++;
//             }
//         }
//         return ans;
//     }