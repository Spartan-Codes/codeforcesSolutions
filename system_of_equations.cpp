#include<iostream>

int main()
{
    int n,m;
    std::cin>>n>>m;
    int count=0;
    for(int a=0; a*a<=n; a++)
    {
        int b=n-a*a;
        if(a+b*b==m)
        {
            count++;
        }
    }
    std::cout<<count;
}