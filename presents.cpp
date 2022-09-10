#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]== i+1)
                std::cout<<j+1<<" ";
        }
    }
}