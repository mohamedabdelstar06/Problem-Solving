public class Solution {
    public void MoveZeroes(int[] nums) {
     
     int left = 0;
     
     for (int  i =0 ; i< nums.Length ; i++){
        if(nums[i] != 0){
            nums[left] = nums[i];
            left++;
        }

       

     }
     for (int  i =left ; i< nums.Length ; i++){
            nums[i] =0;
        }

    }
}
