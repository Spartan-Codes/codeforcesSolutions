#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int aMin = INT_MAX;
        int bMin = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < aMin)
                aMin = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < bMin)
                bMin = b[i];
        }
        long long int sum = 0;
        int ab,aOb;
        for (int i = 0; i < n; i++)
        {
            ab = min(a[i] - aMin, b[i] - bMin);
            aOb = a[i] - aMin + b[i] - bMin - ab - ab;
            sum=sum+ab+aOb;
        }
        cout << sum << endl;
    }
}