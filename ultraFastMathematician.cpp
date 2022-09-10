#include<iostream>

int main()
{
    std::string s1,s2,s3="";
    std::cin>>s1;
    std::cin>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i])
        {
            s3+='0';
        }
        else
        {
            s3+='1';
        }
    }
    std::cout<<s3;
}