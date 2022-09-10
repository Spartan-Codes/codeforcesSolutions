#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    int max,min;
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
        if(i==0)
        {
            max=0;
            min=0;
        }
        if(arr[i]>arr[max])
            max=i;

        if(arr[i]<=arr[min])
            min=i;
    }
    if(max>min)
    {
        std::cout<<max+n-1-min-1;
    }
    else if(min>max)
    {
        std::cout<<max+n-1-min;
    }
}