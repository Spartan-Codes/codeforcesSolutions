#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        int rem = s - k * b;
        if(n>=(rem/(k-1)) && k*b<=s)
        {
            int c;
            if((rem)%(k-1)==0)
                c=(rem)/(k-1);
            else
                c=(rem)/(k-1)+1;

            for(int i=0; i<n-c; i++)
            {
                cout<<0<<" ";
            }
            while(rem>0)
            {
                if(rem>(k-1))
                {    
                    cout<<k-1<<" ";
                    rem-=(k-1);
                }
                else
                {
                    cout<<k*b+rem<<" ";
                    rem=0;
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}