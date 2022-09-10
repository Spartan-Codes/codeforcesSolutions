#include<iostream>

int main()
{
    int n,h;
    std::cin>>n>>h;
    int w=0;
    for(int i=0; i<n; i++)
    {
        int t;
        std::cin>>t;
        if(t>h)
            w+=2;
        else
            w++;
    }
    std::cout<<w;
}