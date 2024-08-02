#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//LEETCODE
int majorityElement(vector<int>& nums) {
    int count = 0;
    int el = nums[0];
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == el) {
            count++;
        }
        else {
            count--;
            if(count <= 0) {
                count = 0;
                if(i+1 < nums.size()) el = nums[i + 1];
            }
        }
    }
    return el;
}