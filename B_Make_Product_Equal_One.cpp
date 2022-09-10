#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    long long int sumP = 0, sumN = 0;
    int N = 0, Z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            sumP += (x - 1);

        if (x == 0)
        {
            sumP++;
            Z++;
        }

        if (x < 0)
        {
            sumN += (-1 - x);
            N++;
        }
    }
    if (N % 2 == 1 && Z==0)
    {
        cout<<sumP+sumN+2;
    }
    else
        cout << sumP + sumN;
}