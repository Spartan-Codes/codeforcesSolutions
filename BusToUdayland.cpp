#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][5];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
        if (a[i][0] == 'O' && a[i][1] == 'O' && flag)
        {
            a[i][0] = '+';
            a[i][1] = '+';
            flag = false;
        }
        if (a[i][3] == 'O' && a[i][4] == 'O' && flag)
        {
            a[i][3] = '+';
            a[i][4] = '+';
            flag = false;
        }
    }
    if (!flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i][0] << a[i][1] << a[i][2] << a[i][3] << a[i][4] << endl;
        }
    }
    else
        cout << "NO";
}