#include<iostream>
using namespace std;

int main()
{
    int n, m;
    int s,t;
    cin>>n>>m;
    int h[n];
    int f[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    for(int i=0; i<n; i++)
    {
         // moving forward
        if(i==0)
            f[i] = 0;
        else
        {
            if(h[i-1]>h[i])
            {
                f[i] = h[i-1]-h[i] + f[i-1];
            }
            if(h[i-1]<h[i])
            {
                f[i] = f[i-1];
            }
        }

        // moving backward
        if(i==0)
            b[n-1-i]=0;
        else
        {
            if(h[n-1-i+1]>h[n-1-i])
            {
                b[n-1-i] = b[n-1-i+1] + h[n-1-i+1] - h[n-1-i];
            }
            if(h[n-1-i+1]<h[n-1-i])
            {
                b[n-1-i] = b[n-1-i+1];
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>>s>>t;
        s-=1;
        t-=1;
        if(s>t)
        {
            cout<<b[t]-b[s]<<endl;
        }
        else if(s<t)
        {
            cout<<f[t]-f[s]<<endl;
        }
        else
            cout<<0<<endl;
    }
}