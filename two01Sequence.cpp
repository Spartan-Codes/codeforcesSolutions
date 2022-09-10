#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        std::cin>>a>>b;
        std::string x,y,z;
        std::cin>>x;
        std::cin>>y;
        z = x;
        if(a>b)
        {
            x.erase(x.begin()+0, x.end()-b);
            if(x==y)
                std::cout<<"YES\n";
            else
            {
                x.erase(x.begin()+0);
                y.erase(y.begin()+0);
                if(x==y)
                {
                    if(z[a-b]=='1')
                    {
                        if(z.find("0")>=0 && z.find("0")<(a-b))
                        {
                            std::cout<<"YES\n";
                        }
                        else
                            std::cout<<"NO\n";
                    }
                    if(z[a-b]=='0')
                    {
                        if(z.find("1")>=0 && z.find("1")<(a-b))
                        {
                            std::cout<<"YES\n";
                        }
                        else
                            std::cout<<"NO\n";
                    }
                }
                else
                {
                    std::cout<<"NO\n";
                }
            }
        }
        else if(a==b)
        {
            if(x==y)
                std::cout<<"YES\n";
            else
                std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    }
}