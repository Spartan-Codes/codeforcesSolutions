#include <iostream>

int main()
{
    int n;
    int t;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> t;
        if (t % 2 == 1)
        {
            std::cout << 1 << " ";
            for (int j = 1; j < t; j++)
            {
                if (j % 2 == 0)
                    std::cout << j  << " ";
                else
                    std::cout << j +2 << " ";
            }
            std::cout << std::endl;
        }
        else
        {
            for (int j = 0; j < t; j++)
            {
                if (j % 2 == 0)
                    std::cout << j + 2 << " ";
                else
                    std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }
}