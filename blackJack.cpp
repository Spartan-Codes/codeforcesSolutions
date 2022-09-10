#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    n-=10;
    if(n==0)
    {
        std::cout<<0;
    }
    else if((n>=1 && n<=9) || n==11 )
    {
        std::cout<<4;
    }
    else if(n==10)
    {
        std::cout<<15;
    }
    else
    {
        std::cout<<0;
    }
}