#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES\n";
            for(int i=1; i<=n/2; i++)
            {
                cout<<2*i<<" ";
            }
            int sum=n/2*(n/2+1);
            for(int i=1; i<=n/2; i++)
            {
                if(i==n/2)
                {
                    cout<<sum;
                }
                else
                {
                    cout<<2*i-1<<" ";
                    sum-=(2*i-1);
                }
            }
            cout<<endl;
        }
        else
            cout<<"NO\n";
    }
}