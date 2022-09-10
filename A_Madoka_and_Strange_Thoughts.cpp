#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>x;
        cout<<x+(x/2)*2+(x/3)*2<<endl;
    }
}