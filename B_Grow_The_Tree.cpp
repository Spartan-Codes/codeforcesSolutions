#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    long long int x=0,y=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(i<n/2)
            y+=a[i];
        else
            x+=a[i];
    }
    cout<<x*x+y*y;
}