#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
            c+=a1;
        else if(s[i]=='2')
            c+=a2;
        else if(s[i]=='3') 
            c+=a3;
        else
            c+=a4;
    }
    cout<<c;
}