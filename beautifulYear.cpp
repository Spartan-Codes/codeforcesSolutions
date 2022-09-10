#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[4];
    bool flag = true;
    n++;
    do
    {
        flag = true;
        int t = n;
        for (int i = 0; i < 4; i++)
        {
            arr[i] = t % 10;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
                break;

            t /= 10;
        }
        n++;
    } while (flag == false);

    cout << n - 1;
}