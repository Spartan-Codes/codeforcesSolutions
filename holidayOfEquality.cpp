#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    int max=0;
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=(max-arr[i]);
    }
    std::cout<<sum;
}