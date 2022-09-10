#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        std::cin>>n;
        int arr[n];
        int l=0;
        bool flag=false;
        for(int j=0; j<n; j++)
        {
            std::cin>>arr[j];
            for(int k=0; k<j; k++)
            {
                if(arr[j]==arr[k])
                {
                    l=std::max(l,k);
                    flag=true;
                }
            }
        }
        if(n!=1 && flag)
        {
            std::cout<<l+1<<std::endl;
        }
        else
            std::cout<<l<<std::endl;
    }
}