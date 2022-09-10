#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    int i=0;
    int j=n-1;
    while(i!=j)
    {
        if(k == arr[i]+arr[j])
        {
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(k>arr[i]+arr[j])
            i++;
        else
            j--;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<pairSum(arr, n, key);

    return 0;
    
}