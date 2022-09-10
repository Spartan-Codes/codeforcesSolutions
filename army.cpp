#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int year[n-1];
    for(int i=0; i<n-1; i++)
    {
        std::cin>>year[i];
    }
    int a,b;
    std::cin>>a>>b;
    a-=1;
    b-=1;
    int t=0;
    while(a+1<=b)
    {
        t+=year[a];
        a++;
    }
    std::cout<<t;
}