#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int n, k;
    while (q--)
    {
        cin >> n >> k;
        int a[n];
        int small = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < small)
                small = a[i];
        }
        small+=k;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i] - small) > k)
            {
                flag = 0;
            }
        }
        if (flag)
            cout << small << endl;
        else
            cout << -1 << endl;
    }
}