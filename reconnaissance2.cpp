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
    int d=99999;
    int x,y;
    for(int i=0; i<n; i++)
    {
        int diff;
        diff=abs(arr[i]-arr[(i+1)%n]);
        if(d>diff)
        {
            d=diff;
            x=i;y=(i+1)%n;
        }
    }
    std::cout<<x+1<<" "<<y+1;
    
}