#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool flag = true;
    for (int i = 0; i < n * m; i++)
    {
        char x;
        cin >> x;
        if (x != 'B' && x != 'W' && x != 'G')
        {
            flag = false;
        }
    }
    if (flag)
        cout << "#Black&White";
    else
        cout << "#Color";
}