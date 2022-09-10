#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int rowP=0;
    for(int i=0; i<n; i++)
    {
        int r=0;
        for(int j=0; j<n; j++)
        {
            if(a[i][j]=='C')
                r++;
        }
        if(r>=2)
        {
            rowP+=(r*(r-1))/2;
        }
    }
    int columnP=0;
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(a[j][i]=='C')
                c++;
        }
        if(c>=2)
        {
            columnP+=(c*(c-1))/2;
        }
    }
    cout<<columnP+rowP;
}