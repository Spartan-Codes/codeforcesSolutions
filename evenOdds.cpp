#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(k<=n/2)
    {
         int c=0;
    int i=1;
    while(i<=n/2)
    {
        c++;
        if(c==k)
            cout<<i;
        i+=2;
    }
    int j=2;
    while(j<=n)
    {
        c++;
        if(c==k)
            cout<<j;
        j+=2;
    }
    }
    else
    {

    }
}