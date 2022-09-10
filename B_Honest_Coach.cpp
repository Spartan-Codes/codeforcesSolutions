#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        int minDiff=9999;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            for(int j=0; j<i; j++)
            {
                minDiff=min(minDiff,abs(arr[i]-arr[j]));
            }
        }
        cout<<minDiff<<endl;
    }
}