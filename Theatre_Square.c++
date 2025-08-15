#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;
int main(){
long long n,m,a;
cin>>n>>m>>a;
if(n==1 &&m==1){
    cout<<1;
    return 0;
}
cout<< ((m+a-1)/a)*((n+a-1)/a);
return 0;
}