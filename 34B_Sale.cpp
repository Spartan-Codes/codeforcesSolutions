//https://www.youtube.com/watch?v=HH_a6aRO1TE
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=0; i<m; i++)
    {
        if(arr[i]<0)
            sum+=arr[i];
        else
            break;
    }
    cout<<-1*sum;
}