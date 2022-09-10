#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k, x;
    int l = 0, r = 0;
    int j = 1;
    while (t--)
    {
        int arr[105];
        for (int i = 0; i < 105; i++)
        {
            arr[i] = 0;
        }
        bool flag = true;
        l = 0;
        r = 0;
        cin >> n >> k;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (arr[x] == 0)
            {
                if (l == k)
                {
                    r++;
                    arr[x] = 2;
                }
                else
                {
                    l++;
                    arr[x]++;
                }
            }
            else if (arr[x] == 1)
            {
                r++;
                arr[x]++;
            }
            else
            {
                flag = false;
                z = x;
            }
        }
        if (flag && l <= k && r <= k)
        {
            cout << "Case #" << j << ": YES" << endl;
        }
        else
        {
            cout << "Case #" << j << ": NO" << endl;
        }
        j++;

    }
}