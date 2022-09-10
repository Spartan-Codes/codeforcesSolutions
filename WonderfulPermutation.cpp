#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        bool arr[k];
        for (int i = 1; i <= k; i++)
        {
            arr[i] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i <= k && x<=k)
                arr[x] = 1;
        }

        int c = 0;
        for (int i = 1; i <= k; i++)
        {
            if (!arr[i])
                c++;
        }
        cout << c << endl;
    }
}