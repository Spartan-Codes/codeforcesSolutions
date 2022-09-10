#include<iostream>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    int f=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i==0)
            f++;
        if(arr[i]-arr[i-1]<=c && i>0)
        {
            f++;
        }
        else if(arr[i]-arr[i-1]>c && i>0)
        {
            f=0;
            f++;
        }
    }
    cout<<f;
}