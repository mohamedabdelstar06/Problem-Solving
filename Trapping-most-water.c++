#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
      vector<int> MaxLeft(height.size());
      vector<int> MaxRight(height.size());
      int max=0;
      for (int i=0;i<height.size();i++){
        if(max>=height[i]){
            MaxLeft[i]=max;
        }
        else{
            max=height[i];
            MaxLeft[i]=max;
        }
      }
      max =0;
        for (int i=height.size()-1;i>0;i--){
        if(max>=height[i]){
            MaxRight[i]=max;
        }
        else{
            MaxRight[i]=max;
            max=height[i];
        }
      }
      int total=0;
        for (int i=0;i<height.size();i++){
            int d=min(MaxLeft[i],MaxRight[i])-height[i];
        if(d>0){
            total+=d;
        }
      }
      return total;
    }
};
