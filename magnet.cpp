#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string p;
    cin>>p;
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        string n;
        cin>>n;
        if(p[1]==n[0])
            sum++;
        p=n;
    }
    cout<<sum+1;
}