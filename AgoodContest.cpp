#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=false;
    string name;
    int before,after;
    for(int i=0; i<n; i++)
    {
        cin>>name>>before>>after;
        if(before>=2400 && before<after)
        {
            flag=true;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}