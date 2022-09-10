#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        int minD=INT_MAX;
        cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<m; i++)
        {
            int x,y;
            int sum=0;
            cin>>x>>y;
            if(arr[x-1]>arr[y-1])
            {
                sum= arr[y-1];
            }
            else if(arr[x-1]<arr[y-1])
            {
                sum=arr[x-1];
            }
            //sum=arr[x-1]+arr[y-1];
            minD = min (sum,minD);
        }
        if(m%2==1)
            cout<<minD<<endl;
        else
            cout<<0<<endl;
    }
}