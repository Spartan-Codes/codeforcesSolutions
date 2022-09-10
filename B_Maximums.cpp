#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    int m=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        cout<<x+m<<" ";
        m = max(m,x+m);
    }
}