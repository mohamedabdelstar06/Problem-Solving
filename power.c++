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
int power(int value,int pow){
    if(pow==1){
        return value;
    }
    return value*power(value,pow-1);
}
int main(){
    cout<<power(3,3);

}