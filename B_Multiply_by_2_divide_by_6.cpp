#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int count;
    while (t--)
    {
        cin >> n;
        count = 0;
        while (n % 3 == 0)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else
            {
                n *= 2;
                count++;
                n /= 6;
                count++;
            }
        }
        if(n==1)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
    }
}