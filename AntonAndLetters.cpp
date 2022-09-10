#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool a[26]={0};
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            if(!a[s[i]-97])
            {
                count++;
                a[s[i]-97]=1;
            }
        }
    }
    cout<<count;
}