#include <iostream>

int main()
{
    int n, m, z;
    std::cin >> n >> m >> z;
    int c=std::min(n,m);
    int hcf;
    do
    {
        if(n%c==0 && m%c==0)
        {
            hcf=c;
            break;
        }
    }while(c--);
    n=(n*m)/hcf;
    int i = 1;
    while ((n * i) <= z)
    {
        i++;
    }
    std::cout << i - 1;
}