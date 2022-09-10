#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count = 1;
    int sum = 0;
    for(int i=0; i<s.length(); i++)
    {
        sum = max(sum,count);
        if(s[i]==s[i+1])
        {
          count++;  
        }
        else
        {
            count = 1;
        }
    }
    if(sum>6)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}