#include<iostream>

int main()
{
    std::string s;
    std::cin>>s;
    int count=0;
    char ptr='a';
    for(int i=0; i<s.length(); i++)
    {
        int c,ac;
        if(ptr<s[i])
        {
            c=s[i]-ptr;
            ac=26+ptr-s[i];
            count+=std::min(c,ac);
            ptr=s[i];
        }
        else
        {
            ac=ptr-s[i];
            c=26+s[i]-ptr;
            count+=std::min(c,ac);
            ptr=s[i];
        }
    }
    std::cout<<count;
}