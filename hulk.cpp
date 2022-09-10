#include <iostream>
using namespace std;

int main()
{
    string s1 = "I hate";
    string s2 = "I love";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << s1;
        else
        {
            if (i % 2 == 0)
            {
                cout << " that "+s1;
            }
            else
            {
                cout<<" that "+s2;
            }
        }
    }
    cout<<" it";
}