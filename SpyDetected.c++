#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<int>set1;
        for(int i=0;i<n;i++){
            if(i!=0&&set1.count(arr[i])==0){
                cout<<i+1;
                break;
            }
            set1.insert(arr[i]);
        }
        t--;
    }
    
}