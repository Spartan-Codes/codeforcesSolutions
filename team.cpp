#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sol=0;
    int arr[3];
    for(int i=0; i<n; i++)
    {   int sum=0;
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
            if(arr[i] == 1)
                sum++;
        }
        if(sum >= 2)
            sol++;
    }
    cout<<sol;
    return 0;
}