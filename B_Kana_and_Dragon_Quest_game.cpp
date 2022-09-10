#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,n,m;
    while(t--)
    {
        cin>>x>>n>>m;
        while(x>(m*10) && n>0)
        {
            x/=2;
            x+=10;
            n--;
        }
        if(x<=(m*10))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}