#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char c;
    long long prev=0,curr=0;
    long long karcha=0;
    long long x=0,y=0;
    for(int i=0; i<n; i++)
    {
        c=s[i];
        prev=curr;
       // cout<<x<<" "<<y<<endl;
        if(c=='U')
        {
            y++;
            if((x-y)==0)
                curr=prev;
            else
                curr=x-y;
        }
        else
        {
            x++;
            if((x-y)==0)
                curr=prev;
            else
                curr=x-y;
        }
      //  cout<<x<<" "<<y<<endl;
      //  cout<<prev*curr<<endl<<endl;
        if((prev*curr)<0)
            karcha++;
    }
    cout<<karcha;
}