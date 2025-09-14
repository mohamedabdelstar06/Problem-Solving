#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
using namespace std;
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(auto it:nums){
        mp[it]++;
    }
    int maxcount=0;
    int ans=-1;
    for(auto it:mp){
        if(it.second>maxcount&&it.first%2==0){
            maxcount=it.second;
            ans=it.first;
        }
        else if(it.second==maxcount&&it.first%2==0){
            ans=min(it.first,ans);
        }
    }
    return ans;
    }
};
int main(){
    Solution s;
    vector<int>v={12,3,4,5,6};
    s.mostFrequentEven(v);
    return 0;
}