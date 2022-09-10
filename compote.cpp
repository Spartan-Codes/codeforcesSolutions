#include<iostream>

int main()
{
    int a,b,c;
    std::cin>>a>>b>>c;
    a/=1;
    b/=2;
    c/=4;
    a=std::min(a,b=std::min(b,c));
    std::cout<<a*7;
}