#include <iostream>

int main()
{
    std::string s;
    getline(std::cin,s);
    std::string g = "AEIOUYaeiouy";
    for (int i = s.length() - 1; i >= 0; i--)
    {
       if(s[i]!=' ' && s[i]!='?')
       {
            int f=0;
            for(int j=0; j<12; j++)
            {
                if(s[i]==g[j])
                    f=1;
            }
            if(f)
                std::cout<<"YES";
            else
                std::cout<<"NO";
            break;
       }
    }
}