#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Ml = 1;
    int c=1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
        else
        {
            c=1;
        }
        Ml=max(Ml,c);
    }
    cout << Ml;
}