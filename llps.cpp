#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int count = 0;
    char c = 'a';
    for (int i = 0; i < s.length(); i++)
    {
        if (c < s[i])
        {
            c = s[i];
            count = 0;
            count++;
        }
        else if (c == s[i])
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << c;
    }
}