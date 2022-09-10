#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[s.length()];
    if (s[0] == 'Q')
    {
        arr[0] = 1;
    }
    else
    {
        arr[0] = 0;
    }
    int A[s.length()];
    if (s[0] == 'A')
    {
        A[0] = 1;
    }
    else
    {
        A[0] = 0;
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == 'Q')
        {
            arr[i] = arr[i - 1]+1;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
        if (s[i] == 'A')
            A[i] = 1;
        else
            A[i] = 0;
    }
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(A[i])
        {
            sum+=(arr[i]*(arr[s.length()-1]-arr[i]));
        }
        //cout << A[i] << " ";
        //cout << arr[i] << endl;
    }
    cout << sum;
}