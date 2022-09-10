#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int first = 0;
    int second = 0;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            if (i < n / 2)
                first += s[i];
            else
                second += s[i];
        }
        else
            flag=true;
    }
    if (first == second && flag==false)
        std::cout << "YES";
    else
        std::cout << "NO";
}