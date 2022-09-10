#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k, r, c;
    while (t--)
    {
        cin >> n >> k >> r >> c;
        r--;
        c--;
        int R = 0;
        int C = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==r && j==C)
                {
                    R=r;
                    C=c;
                }

                if (R == i && C == j)
                {
                    cout << "X";
                }
                else if (C + 1 == j)
                {
                    C = j + k - 1;
                    R=i;
                }
                else if(R+1==i)
                {
                    R=i+k-1;
                    C=j;
                }
                else
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
}