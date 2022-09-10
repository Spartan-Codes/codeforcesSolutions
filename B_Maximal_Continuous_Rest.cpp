#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int  x;
    int arr[n];
    int count = 0;
    int sum = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            cin >> arr[i];
            x=arr[i];
        }
        else
        {
            x=arr[i%n];
        }
        if (x)
            count++;
        else
        {
            sum=max(sum,count);
            count = 0;
        }
    }
    cout<<sum;
}