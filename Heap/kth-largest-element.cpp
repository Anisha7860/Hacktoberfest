#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(auto x : nums) {
            minHeap.push(x);
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        return minHeap.top();
    }
};