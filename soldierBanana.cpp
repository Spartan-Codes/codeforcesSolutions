#include<iostream>
using namespace std;

int main()
{
    int k,w,n;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=0; i<w; i++)
    {
        sum = sum + (i+1)*k;
    }
    if(sum>n)
    {
        cout<<sum-n;       
    }
    else
    {
        cout<<0;
    }
}