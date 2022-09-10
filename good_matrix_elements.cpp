#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int arr[n][n];
    int sum=0;
    int x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::cin>>x;
            if(i==j || i==n-j-1 || j==(n-1)/2 || i==(n-1)/2)
                sum+=x;
        }
    }
    std::cout<<sum;
}