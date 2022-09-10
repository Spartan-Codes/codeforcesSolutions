#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool arr[26];
    for(int i=0; i<26; i++)
        arr[i]=0;
    
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0; i<n; i++)
    { 
        arr[s[i]-97]=1;
    }
    bool f=1;
    for(int i=0; i<26; i++)
    {
        if(!arr[i])
        {
            f=0;
            cout<<"NO";
            break;
        }
    }
    if(f)
        cout<<"YES";
}