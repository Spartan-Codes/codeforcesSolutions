#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    int x;
    int low;
    int high;
    int amazing = 0;
    std::cin >> x;
    low = x;
    high = x;
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> x;
        if (x < low)
        {
            amazing++;
            low = x;
        }
        if (x > high)
        {
            amazing++;
            high = x;
        }
    }
    std::cout << amazing;
}