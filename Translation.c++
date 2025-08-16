#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[t.size()-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;

}