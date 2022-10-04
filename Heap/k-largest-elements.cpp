#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> minheap;
        vector<int> v;
        
        for(int i = 0; i < n; i++) {
            minheap.push(arr[i]);
            if(minheap.size() > k) {
                minheap.pop();
            }
        }
        
        while(minheap.size() > 0) {
            v.push_back(minheap.top());
            minheap.pop();
        }
        
        sort(v.begin(), v.end(), greater<int>());
        
        return v;
    }
};