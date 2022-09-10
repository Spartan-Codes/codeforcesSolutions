#include<iostream>

int main()
{
    int n,m;
    std::cin>>n>>m;
    int i=1;
    while(m>=i)
    {
        m-=i;
        i++;
        if(i>n)
            i%=n;
    }
    std::cout<<m;
}