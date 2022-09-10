#include<iostream>
using namespace std;

int main()
{
    int n;
    int x;
    float sum=0;
    while(n--)
    {
        cin>>x;
        sum+=x;
    }
    sum= sum/n;
    cout<<sum;
}