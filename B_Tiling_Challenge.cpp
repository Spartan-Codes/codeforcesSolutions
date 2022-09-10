#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '.')
            {
                if (j>0&&i < n - 2 && j < n - 1 && a[i + 1][j] == '.' && a[i + 1][j - 1] == '.' && a[i + 1][j + 1] == '.' && a[i + 2][j] == '.')
                {
                    a[i][j] = '#';
                    a[i + 1][j] = '#';
                    a[i + 1][j - 1] = '#';
                    a[i + 1][j + 1] = '#';
                    a[i + 2][j] = '#';
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}