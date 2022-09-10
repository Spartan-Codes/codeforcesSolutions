#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=0; i<n; i++)
    {
        int arr[2*m];
        for(int j=0; j<2*m; j++)
        {
            cin>>arr[j];
            if(j%2==1)
            {
                if(arr[j-1] || arr[j])
                    c++;
            }
        }
    }
    cout<<c;
}