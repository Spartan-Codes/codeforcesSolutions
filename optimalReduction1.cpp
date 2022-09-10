#include <iostream>
using namespace std;

const int N = 1e+5;

int a[N], pref[N], suff[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pref[0] = a[0];
        for (int i = 1; i < n; i++)
            pref[i] = max(pref[i - 1], a[i]);

        suff[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            suff[i] = max(suff[i + 1], a[i]);

        bool ok = true;

        for (int i = 1; i <= n - 2; i++)
        {
            if (pref[i - 1] > a[i] && a[i] < suff[i + 1])
                ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}