#include<iostream>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int min256 = min(k2,min(k5,k6));
    k2-=min256;
    int min32= min(k2,k3);
    cout<<256*min256 +  32*min32;    
}