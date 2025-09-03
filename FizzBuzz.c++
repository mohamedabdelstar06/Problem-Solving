#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        int i=1;
        while (i<=n){
            if(i%3==0&&i%5==0){
                s.push_back("FizzBuzz");
            }
            else if(i%3==0){
                s.push_back("Fizz");
            }
            else if(i%5==0){
                s.push_back("Buzz");
            }
            else {
              s.push_back(to_string(i));
            }
            if(i==n){
                break;
            }
            i++;
        }
        return s;
    }
};
int main(){
int n;
cin>>n;
Solution sol;
sol.fizzBuzz(n);
vector <string>s = sol.fizzBuzz(n);
for(int i=0;i<s.size();i++){
    cout<<s[i]<<" "<<endl;
}
}