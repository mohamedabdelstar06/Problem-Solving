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
void seq(int n){
if (n==1){
    cout<<1<<endl;
    return ;
}
 if (n%2==0){
    seq(n/2);
 }
 else{
    seq(3*n+1);
 }
cout<<n<<endl;

}
int main(){
    seq(5);
    return 0;
}