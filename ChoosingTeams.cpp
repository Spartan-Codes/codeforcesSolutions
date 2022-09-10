#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int c = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a = 5 - a;
        if (a >= k)
            c++;
    }
    cout << c / 3;
}