#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>mp({{"Kia",2019},{"BMW",2025}});
    mp.at("Kia")=2024;
    cout<<mp["Kia"];
}