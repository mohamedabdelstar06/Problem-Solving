#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>nums(size);
    for(auto &num:nums){
        cin>>num;
    }
    int ser=0;
    int dima=0;
    int l=0, r=nums.size()-1;
    for(int i=0;i<nums.size();i++){
        if(i%2==0)
        {
          if(nums[l]>nums[r]){
            ser+=nums[l];
            l++;
          }
          else{
            ser+=nums[r];
            r--;
          }
        }
        else{
            if(nums[l]>nums[r]){
            dima+=nums[l];
            l++;
          }
          else{
            dima+=nums[r];
            r--;
          }
        }
    }
    cout<<ser<<" "<<dima<<endl;
    return 0;
}