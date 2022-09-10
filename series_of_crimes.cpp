#include<iostream>

int main()
{
    int n,m;
    std::cin>>n>>m;
    int arr[3][2];
    int k=0;
    for(int i=0; i<n; i++)
    {
        std::string s;
        std::cin>>s;
        for(int j=0; j<m; j++)
        {
            if(s[j]=='*')
            {
                arr[k][0]=i;
                arr[k][1]=j;
                k++;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(i==0 && j==1)
                k=2;
            else if(i==0 && j==2)
                k=1;
            else if(i==1 && j==2)
                k=0;
            
            if(arr[i][0]!=arr[j][0] && arr[i][1]!=arr[j][1])
            {
                std::cout<<arr[i][0]+arr[j][0]-arr[k][0]+1<<" "<<arr[i][1]+arr[j][1]-arr[k][1]+1;
            }
        }
    }


}