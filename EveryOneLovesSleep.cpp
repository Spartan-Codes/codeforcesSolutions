#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, h, m;
        int sh = 24, sm = 60;
        std::cin >> n >> h >> m;
        for (int j = 0; j < n; j++)
        {
            int ah, am;
            int th, tm;
            std::cin >> ah >> am;
            if (am >= m)
            {
                if ((ah > 12 && h > 12) || (ah <= 12 && h <= 12))
                {
                    th = ah - h;
                    if(th<0)
                        th+=24;
                }
                else
                {
                    th = 24 + (ah - h);
                    if(th>24)
                        th-=24;
                }
                tm = am - m;
            }
            else
            {
                if ((ah > 12 && h > 12) || (ah <= 12 && h <= 12))
                {
                    th = ah - 1 - h;
                    if(th<0)
                        th+=24;
                }
                else
                {
                    th = 24 + (ah - 1 - h);
                    if(th>24)
                        th-=24;
                }
                tm = am + 60 - m;
            }
            if (sh > th )
            {

                sh = th;
                sm = tm;
            }
            else if(sh==th && sm>tm)
            {
                sh=th;
                sm=tm;
            }
        }
        std::cout << abs(sh) << " " << sm << std::endl;
    }
}