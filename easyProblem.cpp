#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        int o;
        std::cin>>o;
        if(o)
            flag=false;
    }
    if(flag)
        std::cout<<"EASY";
    else
        std::cout<<"HARD";
}