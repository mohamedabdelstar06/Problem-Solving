#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0&&n==1){
            cout<<"I hate it"<<" ";
            return 0;
        }
        else if(i==n-1&&n%2==0){
            cout<<"I love it";
            return 0;
        }
        else if(i==n-1&&n%2!=0){
            cout<<"I hate it";
            return 0;
        }
        if( i%2==0){
            cout<<"I hate that"<<" ";
        }
        else{
            cout<<"I love that"<<" ";
        }
    }
}