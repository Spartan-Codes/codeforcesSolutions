#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    char x, y;
    bool flag = 1;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for (int i = 0; i < s1.length(); i++)
    {
        x = s1[i];
        y = s2[i];
        if (x > y)
        {
            cout << 1;
            flag = 0;
            break;
        }
        if (x < y)
        {
            cout << -1;
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << 0;
    }
}