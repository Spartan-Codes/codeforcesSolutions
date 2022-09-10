#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a1, b1, a2, b2;
    int sl;
    while (t--)
    {
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        int x = min(a1,b1);
        int y = min(a2,b2);
        b1 = max(a1,b1);
        b2 = max(a2,b2);
        if(b1==b2 && x+y==b1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}