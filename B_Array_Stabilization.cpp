#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int Omax = INT_MIN, Smax = INT_MIN;
    int Omin = INT_MAX, Smin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > Omax)
        {
            Smax = max(Omax, Smax);
            Omax = x;
        }
        else
            Smax = max(x, Smax);
        if (x < Omin)
        {
            Smin = min(Omin, Smin);
            Omin = x;
        }
        else
            Smin = min(x, Smin);

    }
    cout << min((Omax - Smin), (Smax - Omin));
}