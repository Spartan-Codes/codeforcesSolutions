#include<iostream>

int main()
{
    int y,w;
    std::cin>>y>>w;
    int x=std::max(y,w);
    x=6-x;
    x++;
    if(x==1 || x==5)
        std::cout<<x<<"/6";
    else if(x==2)
        std::cout<<"1/3";
    else if(x==3)
        std::cout<<"1/2";
    else if(x==4)
        std::cout<<"2/3";
    else
        std::cout<<"1/1";
}