#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
class Solution
{
public:
    bool wordPattern(string pattern, string s)
{
    vector<string> words;
    string word;
    for (char c : s) {
        if (c == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    if (!word.empty()) words.push_back(word);

    if (pattern.size() != words.size()) return false;

    map<char, string> p2w;
    map<string, char> w2p;
    for (int i = 0; i < pattern.size(); i++) {
        char p = pattern[i];
        string w = words[i];
        if (p2w.count(p) && p2w[p] != w) return false;
        if (w2p.count(w) && w2p[w] != p) return false;
        p2w[p] = w;
        w2p[w] = p;
    }
    return true;
}
};
int main()
{
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    Solution sol;
    if(sol.wordPattern(s,s1)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
