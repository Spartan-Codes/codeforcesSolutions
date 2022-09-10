#include<iostream>

int main()
{
    int k,r;
    std::cin>>k>>r;
    int i=1;
    while(true)
    {
        int p=k*i;
        if(p%10==0)
            break;
        else
        {
            p-=r;
            if(p%10==0)
                break;
        }
        i++;
    }
    std::cout<<i;
}