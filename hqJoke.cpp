#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0;
    bool flag=false;
    while(i<s.length())
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag=true;
            break;
        }
        i++;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}