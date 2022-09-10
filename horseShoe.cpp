#include<iostream>

int main()
{
    int a[4];
    int ans=4;
    for(int i=0; i<4; i++)
    {
        int s=0;
        std::cin>>a[i];
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                s++;
            }
        }
        if(s==0)
            ans--;
    }
    std::cout<<ans;
}