#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    int x = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr;
        if(arr[0] == 'X')
        {
            if(arr[1] == '+')
                x++;
            else
                x--;
        }
        if(arr[2] == 'X')
        {
            if(arr[0] == '+')
                x++;
            else
                x--;
        }
    }
    cout<<x<<endl;
}