#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<set>
using namespace std;
int main(){
    
    set<int > s{1,2,3,4,5,6,7,8,9,10};
    auto it= s.begin();
    ++++it;
    auto end =s.find(7);
    s.erase(it,end);
    for(auto it:s){
        cout<<it<<endl;
    }

}