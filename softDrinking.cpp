#include<iostream>

int main()
{
    int n,k,l,c,d,p,nl,np;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x = std::min((k*l)/nl, (c*d)/1);
    x = std::min(x,p/np);
    std::cout<<x/n;
}