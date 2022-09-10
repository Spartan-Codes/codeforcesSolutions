#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int curC = 0, maxC = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        curC -= a;
        curC += b;
        maxC = max(curC, maxC);
    }
    cout<<maxC;
    
}