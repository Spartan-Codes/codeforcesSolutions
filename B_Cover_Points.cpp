#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y;
    int sum=INT_MIN;
    while(t--)
    {
        cin>>x>>y;
        sum = max(sum,(x+y));
    }
    cout<<sum;
}