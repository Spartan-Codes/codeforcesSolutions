#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int s,t;
    cin >> n >> m;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++)
    {
        int d = 0;
        cin >> s >> t;
        s -= 1;
        t -= 1;
        if (s > t)
        {
            while (s != t)
            {
                if (h[s] > h[s - 1])
                    d = d + h[s] - h[s - 1];

                s--;
            }
            cout << d << endl;
        }
        else if (s < t)
        {
            while (s != t)
            {
                if (h[s] > h[s + 1])
                    d = d + h[s] - h[s + 1];

                s++;
            }
            cout << d << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}