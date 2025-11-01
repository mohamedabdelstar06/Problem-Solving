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
    int sumOfMultiples(int n) {
      int sum=0;
      for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0){
            sum+=i;
        }
      }
      return sum;
    }
};