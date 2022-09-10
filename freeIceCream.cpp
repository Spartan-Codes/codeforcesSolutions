#include<iostream>
using namespace std;

int main()
{
    long int n;
    long long int x;
    cin>>n>>x;
    long int d;
    char c;
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin>>c>>d;
        if(c=='+')
        {
            x+=d;
        }
        else
        {
            if(d<=x)
                x-=d;
            else
                count++;
        }
    }
    cout<<x<<" "<<count;
}