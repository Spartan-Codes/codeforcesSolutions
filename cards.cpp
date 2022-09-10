#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n/2;
    int arr[n];
    bool a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        a[i]=false;
    }
    sum/=x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]+arr[j]==sum && i!=j && !a[i] && !a[j])
            {
                cout<<i+1<<" "<<j+1<<endl;
                a[i]=true; a[j]=true;
                break;
            }
        }
    }
}