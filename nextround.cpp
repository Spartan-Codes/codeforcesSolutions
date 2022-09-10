#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    int arr[n];
    int i=0;
    while(i<n)
    {   
        cin>>arr[i];
        if(arr[i] <= 0)
        {
            
        }
        else  
        {
            if(i>=k)
            {
                if(arr[k-1] == arr[i])
                {
                    ans++;
                }
            }
            else
            {
                ans++;
            }
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}