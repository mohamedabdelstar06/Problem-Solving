#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        bool result=false;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]==nums[i+1])
          {
            result=true;
            break;
          } 
            
        }
        return result;
    }
};
int main()
{
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    Solution sol;
    bool res=  sol.containsDuplicate(nums);
    if(res==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;

  
}
