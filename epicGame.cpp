#include<iostream>

int gcd(int x,int y)
{
    while (x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    return x;
    
}

int main()
{
    int a,b,n;
    std::cin>>a>>b>>n;
    bool c=0;
    while(n>0)
    {
        if(c==0)
        {
            n = n- gcd(a,n);
            c=1;
        }
        else
        {
            n = n - gcd(b,n);
            c=0;
        }
    }
    if(c==0)
        std::cout<<"1";
    else
        std::cout<<"0";
}