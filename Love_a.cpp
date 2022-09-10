#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            count++;
    }
    if (count > (s.length() / 2))
        cout << s.length();
    else
    {
        count = (2 * count - 1) > 0 ? (2 * count - 1) : 0;
        cout<<count;
    }
}