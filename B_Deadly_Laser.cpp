#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, Sx, Sy, d;
    int count;
    int x, y;
    while (t--)
    {
        x = 1, y = 1;
        count = 0;
        cin >> n >> m >> Sx >> Sy >> d;
        /*bool flag=false;
        for(int i=1; i<=n; i++)
        {
            if(abs(i-Sx)>d)
                flag=true;
        }
        if(!flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=1; i<=m; i++)
        {
            if(abs(i-Sy)>d)
                flag=true;
        }
        if(flag)
        {
            cout<<n-1+m-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }*/

        /*if((abs(Sx-d)>1) && (abs(Sy+d)<m))
        {
            cout<<n-1+m-1<<endl;
        }
        else if((abs(Sy-d)>1) && (abs(Sx+d)<n))
        {
            cout<<n-1+m-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }*/
        if ((Sx - 1 <= d && Sy - 1 <= d) ||
            (Sx - 1 <= d && n - Sx <= d) ||
            (Sy - 1 <= d && m - Sy <= d) ||
            (n - Sx <= d && m - Sy <= d))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n + m - 2 << endl;
        }
    }
}