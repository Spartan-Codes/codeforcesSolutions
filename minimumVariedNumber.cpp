#include <iostream>
#include <math.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        int ans = 0;
        int i = 1;
        while (n > 0)
        {
            if (n <= (10 - i))
            {
                ans=ans+pow(10,i-1)*n;
                break;
            }
            else
            {
                ans = ans + pow(10, i-1) * (10 - i);
                n -= (10 - i);
                i++;
            }
        }
        std::cout<<ans<<std::endl;
    }
}