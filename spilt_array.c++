#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        if(mp.count(nums[i])==true){
            mp[nums[i]]++;
        }
        else{
            mp.insert({nums[i],1});
        }
       } 
       for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]>2){
            return false;
        }
       }
       return true;
    }
};
int main(){
    vector<int>nums={6,1,3,1,1,8,9,2};
    Solution sol;
    cout<<sol.isPossibleToSplit(nums);


}