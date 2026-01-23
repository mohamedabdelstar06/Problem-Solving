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
class stack {
    int * top;
    int * arr;
    stack(int size){
        arr =new int[size];
        top =nullptr;
    }
};