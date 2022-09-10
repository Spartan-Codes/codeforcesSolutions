#include<iostream>
#include<cstring>
using namespace std;

void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        bool arr[n];
        memset(arr,0,n);
        int a[n];
        int j=0;
        for(int i=0; i<2*n; i++)
        {
            int x;
            cin>>x;
            x--;
            if(!arr[x])
            {    
                a[j]=x+1;
                arr[x]=1;
                j++;
            }
        }
        printarray(a,n);
        cout<<endl;
    }
}