#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        for (int i = 0; i < s.length(); i++) {
            if(s[i]=='I'){
              if  (i + 1 < s.length() && (s[i + 1] == 'V' || s[i + 1] == 'X')){
                 x+=0;
              }
              else{
                x+=1;
              }
                
            }
            if (s[i] == 'V') {

                if (s[i - 1] == 'I'&&i!=0) {
                    x += 4;
                } else {
                    x += 5;
                }
            }
            if (s[i] == 'X') {
                if(i + 1 < s.length() && (s[i + 1] == 'L' || s[i + 1] == 'C')){
                    x+=0;
                }
              else   if (s[i - 1] == 'I'&&i!=0) {
                    x += 9;
                } else {
                    x += 10;
                }
            }
            if (s[i] == 'L') {
                if (s[i - 1] == 'X'&&i!=0) {
                    x += 40;
                } else {
                    x += 50;
                }
            }
            if (s[i] == 'C') {
                if(i + 1 < s.length() && (s[i + 1] == 'M' || s[i + 1] == 'D')){
                    x+=0;
                }
                else if (s[i - 1] == 'X'&&i!=0) {
                    x += 90;
                } else {
                    x += 100;
                }
            }
            if (s[i] == 'D') {
                if (s[i - 1] == 'C'&&i!=0) {
                    x += 400;
                } else {
                    x += 500;
                }
            }
            if (s[i] == 'M') {
                if (s[i - 1] == 'C'&&i!=0) {
                    x += 900;
                } else {
                    x += 1000;
                }
            }
        }
        return x;
    }
};
int main(){
    string s;
    cin>>s;
    Solution sol;
   int x= sol.romanToInt(s);
   cout<<x;

    return 0;
}