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
    bool isIsomorphic(string s, string t) {
     if(s.size()!=t.size()){
        return false;
     }
      unordered_map<char,char>s1;
      unordered_map<char,char>t1;
      for(int i=0;i<s.size();i++){
        s1[s[i]]=t[i];
        t1[t[i]]=s[i];
      }  
      for(int i=0;i<s.size();i++){
        if(s[i]!=t1[t[i]]||t[i]!=s1[s[i]]){
            return false;
        }
      }
      return true;
    }
};