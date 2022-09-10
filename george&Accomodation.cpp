#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int count=0;
    for(int i=0; i<n; i++)
    {
        int p,q;
        std::cin>>p>>q;
        if(q-p>=2)
            count++;
    }
    std::cout<<count;
}