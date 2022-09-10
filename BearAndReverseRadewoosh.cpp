#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int p[n], t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int limak = 0, l = 0;
    int rade = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        l += t[i];
        limak += max(0, p[i] - l * c);
        r += t[n - 1 - i];
        rade += max(0, p[n - 1 - i] - r * c);
    }
    if (limak > rade)
        cout << "Limak";
    else if (limak < rade)
        cout << "Radewoosh";
    else
        cout << "Tie";
}