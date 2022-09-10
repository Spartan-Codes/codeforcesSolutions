#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        char a[n][m];
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(i==n-1 && a[i][j]=='D')
                    count++;

                if(j==m-1 && a[i][j]=='R')
                    count++;
            }
        }
        cout<<count<<endl;
    }
}