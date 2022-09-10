#include<iostream>

bool checkPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    std::cin>>n;
    int m=1;
    while(checkPrime(n*m+1))
    {
        m++;
    }
    std::cout<<m;
}