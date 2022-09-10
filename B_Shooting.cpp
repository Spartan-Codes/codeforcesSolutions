#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    bool z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        z[i]=1;
    }
    sort(a, a + n, greater<int>());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] * i + 1);
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j] && z[j])
            {
                cout << j + 1 << " ";
                z[j] = 0;
                break;
            }
        }
    }
}