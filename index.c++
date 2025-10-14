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
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        long long n;
        cin >> n;
       string s=to_string(n);
       
       if(s[0]=='1'&&s[1]=='0'&&s[2]!='0'){
        if(s[2]=='1'&&s.size()==3)
        {
            cout<<"NO"<<endl;
            t--;
            continue;
        }
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       t--;
    }
}