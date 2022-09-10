#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int f=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(!f)
                {
                    if(j==m-1)
                    {
                        cout<<"#";
                        f=1;
                    }
                    else
                        cout<<".";
                }
                else
                {
                    if(j==0)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                        if(j==m-1)
                            f=0;
                    }
                }
            }
        }
        cout<<endl;
    }
}