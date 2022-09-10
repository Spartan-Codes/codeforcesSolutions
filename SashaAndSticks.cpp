#include<iostream>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    n/=k;
    if(n%2==1)
        cout<<"YES";
    else
        cout<<"NO";
}