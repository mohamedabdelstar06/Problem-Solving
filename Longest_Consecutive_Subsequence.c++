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
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> s;
        int count = 0;
        auto it2 = s.begin();
        for (int i = 0; i < nums.size(); i++)
        {
            it2 = s.emplace_hint(it2, nums[i]);
        }
        auto it1 = s.begin();
        it1++;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (*it + 1 != *it1)
            {
                cout<<*it + 1<<" "<<*it1<<endl;
                break;
            }
            count++;
            it1++;
        }
        return count;
    }
};
int main()
{
    vector<int> v = {100, 4, 200, 1, 3, 2};
    find(v.begin(),v.end(),5);
    Solution sol;
    cout << sol.longestConsecutive(v);
    return 0;
}