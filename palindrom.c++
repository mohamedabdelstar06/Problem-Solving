#include <iostream>
#include<string>
#include<specstrings.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool res = true;
        for (int i = 0; i <= s.size() / 2; i++) {

            if (s[i] != s[s.size()-1 - i]) {
                res = false;
                break;
            }
        }
        return res;
    }
};
