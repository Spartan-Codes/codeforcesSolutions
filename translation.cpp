#include <iostream>
using namespace std;

int main()
{
    string o, t;
    cin >> o;
    cin >> t;
    bool flag = true;
    for (int i = 0; i < o.length(); i++)
    {
        if (o[i] != t[o.length() - 1 - i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}