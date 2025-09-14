#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        long long n;
        long long odd = 0;
        long long Countodd = 0;
        bool cut = false;
        cin >> n;
        long long den[n];
        for (int i = 0; i < n; i++)
        {
            cin >> den[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (den[i] % 2 != 0)
            {
                Countodd++;
                if (odd == 0 && Countodd % 2 != 0)
                {
                    odd += den[i];
                    cut = true;
                }
                else if (cut ==true&&Countodd%2==0){
                    cut =false;
                }
            }
            if(cut==true){
                odd+=den[i];
            }
        }
        cout <<odd<<endl;
        t--;
    }
}