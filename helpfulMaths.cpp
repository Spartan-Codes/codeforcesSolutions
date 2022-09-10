#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int l = s.length()/2 + 1;
    for(int i=0; i<s.length(); i++)
    {
        if(i%2==0)
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<s.length(); i++)
    {
        if(i%2==0)
            s[i] = v[i/2];
    }
    cout<<s;

}