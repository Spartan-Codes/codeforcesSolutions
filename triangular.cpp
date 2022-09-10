#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    bool f=false;
    int i=1;
    while(!f && n>=(i*(i+1))/2)
    {
        if(n==(i*(i+1))/2)
            f=true;

        i++;
    }
    if(f)
        std::cout<<"YES";
    else
        std::cout<<"NO";
}