#include<iostream>

int main()
{
    std::string f,s,o;
    std::cin>>f;
    std::cin>>s;
    std::cin>>o;
    if(f.length()+s.length()!=o.length())
    {
        std::cout<<"NO";
    }
    else
    {
        f = f+s;
        bool flag=false;
        for(int i=0; i<f.length(); i++)
        {
            flag=false;
            for(int j=0; j<o.length(); j++)
            {
                if(f[i]==o[j])
                {
                  //  std::cout<<f[i]<<std::endl;
                    o[j]='0';
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                std::cout<<"NO";
                break;
            }
        }
        if(flag)
        {
            std::cout<<"YES";
        }
    }
}