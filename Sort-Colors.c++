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
    void sortColors(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    int a=0;
                    a=nums[j];
                    nums[j]=nums[i];
                    nums[i]=a;
                }
            }
        }
    }
};