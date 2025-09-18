#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:map){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};