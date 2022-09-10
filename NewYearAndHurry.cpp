#include<iostream>

int main()
{
    int n,k;
    std::cin>>n>>k;
    k=240-k;
    int i=1;
    while(k>=5*i && i<=n)
    {
        k-=5*i;
        i++;
    }
    std::cout<<i-1;
}