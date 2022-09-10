#include<iostream>

int main()
{
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m;
    std::cin>>n>>m;
    bool flag=false;
    for(int i=0; i<15; i++)
    {
        if(arr[i]==n)
        {
            if(arr[i+1]==m)
            {
                flag=true;
            }
            break;
        }   
    }
    if(flag)
        std::cout<<"YES";
    else
        std::cout<<"NO";

}