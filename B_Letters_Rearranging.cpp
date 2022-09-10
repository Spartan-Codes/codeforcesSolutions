#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {   
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]==s.back())
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }   
}
