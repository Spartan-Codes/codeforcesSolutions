#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        int l = s[i].size();
        if(l>10)
        {
            s[i] = s[i][0] + to_string((l-2)) + s[i][l-1];

        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}