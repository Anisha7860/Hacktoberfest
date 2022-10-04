#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/distant-barcodes/

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int, int> mp;
        for(auto x : barcodes) {
            mp[x]++;
        }
        
        priority_queue<pair<int, int>> pq;
        for(auto x : mp) {
            pq.push(make_pair(x.second, x.first));
        }
        
        vector<int> v(barcodes.size());
        int i = 0;
        while(pq.size() > 1) {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();
            
            v[i] = a.second;
            i++;
            a.first -= 1;
            v[i] = b.second;
            i++;
            b.first -= 1;
            
            if(a.first > 0) {
                pq.push(make_pair(a.first, a.second));
            }
            if(b.first > 0) {
                pq.push(make_pair(b.first, b.second));
            }
        }
        
        if(!pq.empty()) {
            v[barcodes.size() - 1] = pq.top().second;
        }
        
        return v;
    }
};