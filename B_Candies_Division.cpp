#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        if(n%k==0)
            cout<<n<<endl;
        else
        {
            if(n%k<=k/2)
                cout<<n<<endl;
            else
            {
                cout<<n-(n%k-k/2)<<endl;
            }
        }
    }
}