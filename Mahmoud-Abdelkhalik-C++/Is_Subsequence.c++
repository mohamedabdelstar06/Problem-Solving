#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
     int i=0;
     if(s.size()==0){
        return true;
     }
     for (int j=0;j<=t.size();j++){
        if(t[j]==s[i]){
            cout<<t[i];
            i++;
        }
       
     } 
      cout<<i<<endl;
     if(i==s.size()-1){
        return true;
     }  
     else{
        return false;
     }
    }
};
int main(){
    Solution s;
    string str1="abc";
    string str2="ahbgdc";
    cout<<s.isSubsequence(str1,str2);
    return 0;
}