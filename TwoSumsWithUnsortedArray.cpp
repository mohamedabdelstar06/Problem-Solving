#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int i,j;
     int n=nums.size();
     for(int i=0; i<n; i++)
     {
        for(j=i+1; j<n; j++)
        {
            if(target-nums[i]==nums[j])
                return {i, j};
        }
     } 
     return {};  
    }
};
int main()
{
    vector<int> nums = {-1,0};
    int target = -1;
    Solution sol;
    vector<int>v= sol.twoSum(nums, target);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}
