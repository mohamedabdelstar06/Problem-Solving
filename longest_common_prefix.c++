#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word="";
      for(int i=0 ;i<strs[0].size();i++){
        char x=strs[0][i];
        for(int j=1;j<strs.size();j++)
        {
            if(strs[j][i]!=x){
               return word;
            }
            

        }
         word+=x;
      }
      return word;
    }
};