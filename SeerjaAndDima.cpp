#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int front = 0, end = n - 1;
    int S = 0, D = 0, f = 0;
    while (front <= end)
    {
        if (f==1)
        {
            if (arr[front] > arr[end])
            {
                D+=arr[front];
                front++;
            }
            else
            {
                D+=arr[end];
                end--;
            }
            f=0;
        }
        else
        {
            if (arr[front] > arr[end])
            {
                S+=arr[front];
                front++;
            }
            else
            {
                S+=arr[end];
                end--;
            }
            f=1;
        }
    }
    cout<<S<<" "<<D;
}