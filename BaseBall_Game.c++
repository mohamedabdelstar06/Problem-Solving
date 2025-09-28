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
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for (int i = 0; i < operations.size(); i++) {
            
            if (operations[i] == "+") {
                v.push_back(v[v.size() - 1] + v[v.size() - 2]);
            }
           else if (operations[i] == "D") {
                v.push_back(v[v.size() - 1] * 2);
            }
           else if (operations[i] == "C") {
                v.pop_back();
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        
        for (int i : v) {
            sum += i;
        }
        return sum;
    }
};
int main(){
    vector<string>strs={"5","-2","4","C","D","9","+","+"};
    Solution sol;
    cout<<sol.calPoints(strs);
    return 0;
}