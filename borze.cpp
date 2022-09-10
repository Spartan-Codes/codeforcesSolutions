#include<iostream>

int main()
{
    std::string s;
    std::cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            std::cout<<0;
        }
        else
        {
            if(s[i+1]=='.')
                std::cout<<1;
            else
                std::cout<<2;
            
            i++;
        }
    }
}