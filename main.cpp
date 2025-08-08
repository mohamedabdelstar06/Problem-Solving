#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        if (numbers.size() == 2)
        {
           return{1,2};
        }
        else
        {
            int l = 0;
            int r = numbers.size()-1;
            while (l < r)
            { 
                if (numbers[l] + numbers[r] == target)
                {
                    break;
                }
                else if (numbers[l] + numbers[r] < target)
                {
                    l++;
                }
                else if (numbers[l] + numbers[r] > target)
                {
                    r--;
                }

            }
            
            return{++l,++r};
        }
    }
};
int main()
{
    vector<int> nums = {-1,0};
    int target = -1;
    Solution sol;
    vector<int>v= sol.twoSum(nums, target);
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

}
