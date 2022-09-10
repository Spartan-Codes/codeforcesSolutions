#include <iostream>
#include <algorithm>

int main()
{
    int n, t;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> t;
        int arr[t];
        if (t == 1)
        {
            std::cin >> arr[0];
            std::cout << "YES" << std::endl;
        }
        else
        {
            bool flag = true;
            for (int j = 0; j < t; j++)
            {
                std::cin >> arr[j];
            }
            std::sort(arr, arr + t);
            for (int j = 0; j < t; j++)
            {
                if (abs(arr[j] - arr[j + 1]) >= 2 && j!=t-1)
                {
                    std::cout << "NO" << std::endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                std::cout << "YES" << std::endl;
        }
    }
}