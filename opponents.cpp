#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    string s="";
    string st[d];
    for(int i=0; i<n; i++)
    {
        s=s+'1';
    }
    for(int i=0; i<d; i++)
    {
        cin>>st[i];
    }
    int c=0;
    int m=0;
    for(int i=0; i<d; i++)
    {
        if(st[i]!=s)
        {
            c++;
        }
        else
        {
            c=0;
        }
        m=max(m,c);
    }
    cout<<m;
}