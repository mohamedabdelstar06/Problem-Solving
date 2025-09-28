public class Solution {
    public bool hasDuplicate(int[] nums) {
     HashSet<int> num = new HashSet<int>();
     foreach(int n in nums){
        if(num.Contains(n))
            return true;
            num.Add(n); 
     }
       return false;
    }
}
