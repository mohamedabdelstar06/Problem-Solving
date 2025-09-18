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
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int res = 0;
        int majority = 0;

        for (int n : nums) {
            hash[n]++;
            if (hash[n] > majority) {
                res = n;
                majority = hash[n];
            }
        }

        return res;        
    }
};
int main()
{
    vector<int> v = {2,2,1,1,1,2,2};
    find(v.begin(),v.end(),5);
    Solution sol;
    cout << sol.majorityElement(v);
    return 0;
}