#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n;
        int sum=0;
        while (n >= 10)
        {
            x = n / 10;
            n = n - x * 10;
            sum+=(x*10);
            n += x;
        }
        cout <<sum+n<< endl;
    }
}