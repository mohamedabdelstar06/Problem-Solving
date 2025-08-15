#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing=0; 
       vector <int>copy(nums.size());
       for(int i= 0;i<=copy.size();i++){
           
          copy[i]=i;
       }
       sort(nums.begin(),nums.end());
       for(int i= 0;i<=copy.size();i++){
          if(nums[i]!=copy[i]){
            missing=copy[i];
            break;
          }
       }
        return missing; 
    }
};

int main(){
    vector<int>v={9,6,4,2,3,5,7,0,1};
     int num =v[v.size()-1];
     v.pop_back();
     v.emplace(v.begin(),num);
     v.shrink_to_fit();
    for(int i= 0;i<v.size();i++){
          cout<<v[i]<<" ";
       }
}