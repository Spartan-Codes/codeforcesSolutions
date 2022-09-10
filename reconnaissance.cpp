#include<iostream>

int main()
{
    int n,d;
    std::cin>>n>>d;
    int arr[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
        for(int j=0; j<i; j++)
        {
            if(d>=abs(arr[i]-arr[j]))
                count++;
        }
    }
    std::cout<<2*count;
}