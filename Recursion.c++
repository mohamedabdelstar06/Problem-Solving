#include <iostream>
using namespace std;
int seq(int n)
{
    if (n == 1)
    {
        cout << 1<<" ";
        return 1;
    }
    if (n % 2 == 0)
    {
        cout<<n<<" ";
        seq(n / 2);
        
    }
    else
    {
        cout<<n<<" ";
        seq(3 * n + 1);
        
    }
}
int main()
{
    int n;
    cin >> n;
    seq(n);
}