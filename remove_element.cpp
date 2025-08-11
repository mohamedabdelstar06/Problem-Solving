class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          int num=0;
             for(int i=0 ;i<nums.size();i++){
                if(val!=nums[i]){
                    nums[num] = nums[i];
                    num++;
                }
          }
          return num;
    }
};