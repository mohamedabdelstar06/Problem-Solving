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
    int lengthOfLongestSubstring(string s) {
        //bcb
       int l=0;
       int longest=0;
       set<char>sett;
       for(int i=0;i<s.size();i++){
        while(sett.count(s[i])==true){
            sett.erase(s[l]);
            l++;
        }
        sett.insert(s[i]);
       int w=(i-l)+1;
        longest=max(w,longest);
       } 
       return longest;
    }
};
int main(){
    string s="abcabba";
    Solution sol;
   cout<< sol.lengthOfLongestSubstring(s);

}