#include<iostream>

bool checkPrime(int x)
{
    bool f=true;
    if(x%2==0)
        return false;
    for(int i=3; i<x; i+=2)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,m;
    std::cin>>n>>m;
    if(n==2)
    {
        if(m==3)
            std::cout<<"YES";
        else
            std::cout<<"NO";
    }
    else
    {
        n+=2;
        while(!checkPrime(n))
        {
            n+=2;
        }
        if(n==m)
        {
            std::cout<<"YES";
        }
        else
            std::cout<<"NO";
    }
}