#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                  st.push(s[i]);
            }  
            else
            {
                if(st.empty()==true){
                    return false;
                }
                if(s[i]-st.top()==1||s[i]-st.top()==2){
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty()?true:false;
    }
};
