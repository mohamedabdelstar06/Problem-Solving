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
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            // skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int target = -nums[i];
            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    res.push_back({nums[i], nums[l], nums[r]});

                    // move both pointers and skip duplicates
                    ++l;
                    --r;
                    while (l < r && nums[l] == nums[l-1]) ++l;
                    while (l < r && nums[r] == nums[r+1]) --r;
                }
                else if (sum < target) {
                    ++l;
                } else { // sum > target
                    --r;
                }
            }
        }
        return res;
    }
};