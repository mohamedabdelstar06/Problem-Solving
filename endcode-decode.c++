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
class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string arr[strs.size()];

        for (int i = 0; i < strs.size(); i++)
        {
            arr[i] = strs[i];
        }
        string s;
        for (int i = 0; i < strs.size(); i++)
        {
            s += to_string(arr[i].size())+'#'+arr[i].substr(0, arr[i].size())  ;
        }

        return s;
    }

    vector<string> decode(string s)
    {
        
        vector<string> v;
if(s.empty()){
    s=" ";
    v.push_back(s);
    return v;

}
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#'&&s[i-1]-'0'>0)
            {
               int counter= s[i-1]-'0';
               v.push_back(s.substr(i+1,counter));
            }
        }
        return v;
    }
};
int main()
{
    vector<string> v = {"neet", "code", "love", "you"};
    Solution sol;
    string v1 = sol.encode(v);
    vector<string> v2;
    v2 = sol.decode(v1);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}