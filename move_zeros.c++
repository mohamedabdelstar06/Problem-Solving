#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        int count=0;
        int swap=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
       for(int i=0;i<nums.size();i++){
        if(swap==count){
            break;
        }
        if(nums[i]==0){
            nums.erase(find(nums.begin(),nums.end(),0));
            nums.push_back(0);
            swap++;
        }
       } 
       return nums;
    }
};
int main(){
    vector<int>v={0};
    Solution sol;
    vector<int>v1=sol.moveZeroes(v);
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }
    
}