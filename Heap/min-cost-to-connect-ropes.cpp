#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> minheap;
        
        for(int i = 0; i < n; i++) {
            minheap.push(arr[i]);
        }
        
        long long cost = 0;
        while(minheap.size() >= 2) {
            long long first = minheap.top();
            minheap.pop();
            long long second = minheap.top();
            minheap.pop();
            cost = cost + first + second;
            minheap.push(first + second);
        }
        
        return cost;
    }
};