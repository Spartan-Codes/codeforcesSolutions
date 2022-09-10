#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0,m=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x>0)
            p++;
        else
            m++;
    }
    if(p>0 && (m==1 || m==0))
        cout<<"Yes";
    else if(m>0 && (p==1 || p==0))
        cout<<"Yes";
    else
        cout<<"No";
}