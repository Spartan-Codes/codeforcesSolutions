#include<iostream>
#define int long long 
const int M=2e5+10;
using namespace std;
int arr[M];

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<M; i++)
        {
            arr[i]=0;
        }
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }

        int pos=-1;
        for(int j=n-1; j>=0; j--)
        {
            if(arr[a[j]]==0)
                arr[a[j]]++;
            else
            {
                pos=j;
                break;
            }
        }
        if(pos!=-1)
            cout<<pos+1<<endl;
        else
            cout<<0<<endl;
    }
}

