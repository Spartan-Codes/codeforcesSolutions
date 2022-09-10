#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int Pcount=0;
    int unsolved=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x<0 && Pcount==0)
        {
            unsolved++;
        }
        else if(x<0 && Pcount!=0)
        {
            Pcount+=x;
        }
        else if(x>0)
        {
            Pcount+=x;
        }
    }
    cout<<unsolved;
}