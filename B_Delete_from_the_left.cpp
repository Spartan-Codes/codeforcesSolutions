#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int sl=s.length()-1;
    int tl=t.length()-1;
    while(min(sl,tl)>=0)
    {
        if(s[sl]==t[tl])
        {
            sl--;
            tl--;
        }
        else
            break;
    }
    cout<<sl+tl+2;
}