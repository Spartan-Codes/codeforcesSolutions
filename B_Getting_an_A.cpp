#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float target = 4.5 * n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        target -= x;
        x = 5 - x;
        if (x > 0)
            v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    if (v.size() == 0)
        cout << ans;
    else
    {
        for (int y : v)
        {
            if(target>0)
            {
                target-=v[ans];
                ans++;
            }
            else
                break;
        }
        cout<<ans;
    }
}