#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> maxheap;
        for(int i = l; i <= r; i++) {
            maxheap.push(arr[i]);
            if(maxheap.size() > k) {
                maxheap.pop();
            }
        }
        
        return maxheap.top();
    }
};