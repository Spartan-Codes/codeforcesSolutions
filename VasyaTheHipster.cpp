#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" ";
    a=max(a,b)-min(a,b);
    cout<<a/2;
}