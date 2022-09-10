#include<iostream>
using namespace std;

int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    int l=y.length();
    bool f=true;
    for(int i=0; i<l; i++)
    {
        if(x[i]<y[i])
            f=false;
    }   
    if(f)
        cout<<y;
    else
        cout<<-1;
}