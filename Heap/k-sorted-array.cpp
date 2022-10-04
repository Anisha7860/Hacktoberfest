#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector <int> nearlySorted(int arr[], int num, int K){
        priority_queue<int, vector<int>, greater<int>> minheap;
        vector<int> ans;
        
        for(int i = 0; i < num; i++) {
            minheap.push(arr[i]);
            if(minheap.size() > K) {
                ans.push_back(minheap.top());
                minheap.pop();
            }
        }
        
        while(minheap.size() > 0) {
            ans.push_back(minheap.top());
            minheap.pop();
        }
        
        return ans;
    }
};