#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int count = 0;
    while (l <= b)
    {
        l *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}