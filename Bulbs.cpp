#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool arr[m];
    for(int i=0; i<m; i++)
        arr[i]=0;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        for(int j=0; j<x; j++)
        {
            int y;
            cin>>y;
            arr[y-1]=1;
        }
    }
    bool flag=true;
    for(int i=0; i<m; i++)
    {
        if(!arr[i])
        {
            flag=false;
            cout<<"NO";
            break;
        }
    }
    if(flag)
        cout<<"YES";
}