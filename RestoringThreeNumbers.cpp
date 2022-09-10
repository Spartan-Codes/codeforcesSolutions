#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int M= max(arr[0],max(arr[1],max(arr[2],arr[3])));
    arr[0]=M-arr[0];
    arr[1]=M-arr[1]; 
    arr[2]=M-arr[2];
    arr[3]=M-arr[3];
    for(int i=0; i<4; i++)
    {
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
    }
}