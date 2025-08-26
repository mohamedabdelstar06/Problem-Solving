#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int index = 0;
        while (l <= r) {
            int i =  (r - l) / 2;
            index = i;
            int n = nums[i];
            if (target > n) {
                l = i + 1;
            } else if (target < n) {
                r = i - 1;
            } else {
                return i;
            }
        }
        if (nums[index] > target) {
                 return index ;
        }
        if (nums[index] < target) {
            return index + 1;
        }
        return 0;
    }
};
int main(){
    vector<int> v = {1,3};
    Solution sol;
  cout<<  sol.searchInsert(v,2);
    
}