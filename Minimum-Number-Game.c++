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
    vector<int> numberGame(vector<int>& nums) {
       if(nums.size()%2!=0){
        return {};
       }
      for (int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[j]>nums[i]){
                swap(nums[j],nums[i]);
            }
        }
      }
      for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
      }
      for(int i=0;i<nums.size()-1;i+=2){
        swap(nums[i],nums[i+1]);
      }
      return nums ;
    }
};