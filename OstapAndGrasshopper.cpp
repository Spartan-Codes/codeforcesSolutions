#include<iostream>

int main()
{
    int n,k;
    std::cin>>n>>k;
    char s[n];
    int g,t;
    for(int i=0; i<n; i++)
    {
        std::cin>>s[i];
        if(s[i]=='G')
            g=i;
        if(s[i]=='T')
            t=i;
    }
    if(g<t)
    {
        bool flag=false;
        while(g<t)
        {
            g+=k;
            if(s[g]=='#')
            {
                break;
            }
            if(s[g]=='T')
            {
                flag=true;
                break;
            }
        }
        if(flag)
            std::cout<<"YES";
        else
            std::cout<<"NO";
    }
    else
    {
        bool flag=false;
        while(g>t)
        {
            g-=k;
            if(s[g]=='#')
            {
                break;
            }
            if(s[g]=='T')
            {
                flag=true;
                break;
            }
        }
        if(flag)
            std::cout<<"YES";
        else
            std::cout<<"NO";
    }
}