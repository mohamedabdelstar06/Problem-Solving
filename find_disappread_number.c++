#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        bool res = false;
        vector<int> missing;
        sort(nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); i++)
        {

            for (int j = 0; j < nums.size(); j++)
            {
                if (i == nums[j])
                {
                    res = true;
                    break;
                }
            }
            if (res == false)
            {  
                missing.push_back(i);
            }
            res=false;
        }
        return missing;
    }
};
int main()

{
    vector <int> v={4,3,2,7,8,2,3,1};
    Solution sol;
    
    vector <int> v2=sol.findDisappearedNumbers(v);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

}