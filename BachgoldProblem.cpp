#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 1)
    {
        n /= 2;
        std::cout << n << std::endl;
        for (int i = 0; i < n - 1; i++)
        {
            std::cout << 2 << " ";
        }
        std::cout << 3;
    }
    else
    {
        n /= 2;
        std::cout << n << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << 2 << " ";
        }
    }
}