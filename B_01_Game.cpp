#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    int c0,c1;
    while(t--)
    {
        cin>>s;
        c0=0; c1=0;
        for(char c: s)
        {
            if(c=='1')
                c1++;
            else
                c0++;
        }
        if(min(c0,c1)%2==1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
}