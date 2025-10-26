#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& heights) {
     int l=0;
     int r=heights.size()-1;
     int max_area=0;
     while(l<r){
      
       max_area=max(((r-l)*min(heights[r],heights[l])),max_area);
      if(heights[r]<heights[l])
      {
        r--;
      }
      else if(heights[r]>heights[l]){
        l++;
      }
      else{
l++;
r--;
      }
     }
     return max_area;   
    }
};
