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
int max_array(int arr[],int lenght){
   
    if(lenght==0){
        return ;
    }
    int max_a = max(max_array(arr,lenght),max_array(arr,lenght-1));
}
int main(){
    int arr[4]={1,2,3,4};
   cout<< max_array(arr,4);
}