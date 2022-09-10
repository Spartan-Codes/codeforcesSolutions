#include<iostream>
using namespace std;

int main()
{
    int n;
    int a,b,c,x,y,z;
    cin>>n;
    cin>>a>>b>>c;
    for(int i=1; i<n; i++)
    {
        cin>>x>>y>>z;
        a += x;
        b += y;
        c += z;
    }
    if(a==0 && b==0 && c==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}