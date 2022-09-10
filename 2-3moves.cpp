#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x;
        cin>>x;
        if(x==1)
            cout<<2<<endl;
        else if(x==2||x==3)
            cout<<1<<endl;
        else
        {
            if(x%3==0)
                cout<<x/3<<endl;
            else
                cout<<x/3+1<<endl;
        }
    }
}
