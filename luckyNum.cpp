#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
            count++;

        n /= 10;
    }
    if (count != 0)
    {
        bool flag = true;
        while (count != 0)
        {
            if (count % 10 != 7 && count % 10 != 4)
            {
                flag = false;
                break;
            }
            count /= 10;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    else
        cout << "NO";
}