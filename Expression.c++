#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[11];
     arr[0] = a + b + c;
 arr[1] = a+ b * c;
     arr[2] = a * b + c;
     arr[3] = (a + b) + c;
     arr[4] = (a * b) + c;
     arr[5] = (a * b) * c;
     arr[6] = a+ (b + c);
     arr[7] = a + (b * c);
     arr[8] = a * (b * c);
     arr[9] = (a + b) * c;
     arr[10] = a * (b + c);
    sort(arr,arr+11);
    cout<<arr[10];
    
}