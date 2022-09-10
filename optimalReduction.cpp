#include <iostream>
using namespace std;

bool checkZero(int arr[], int n)
{
    bool f=true;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            f=false;
        }
    }
    return f;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0;
    int f = 0;
    int count = 0;
    while (!checkZero(arr,n))
    {
        if(arr[i]==0 && f!=0)
        {
            count++;
            f=0;
        }
        else
        {
            if(i==n-1)
            {
                arr[i]--;
                count++;
            }
            else
            {
                arr[i]--;
            }
        }
        i++;
        i %= n;
    }
    std::cout<<count;
}