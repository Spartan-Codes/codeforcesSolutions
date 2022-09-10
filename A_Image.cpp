#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    set<char> s;
    string l1,l2;
    while(t--)
    {
        s.clear();
        cin>>l1;
        cin>>l2;
        s.insert(l1[0]);
        s.insert(l1[1]);
        s.insert(l2[0]);
        s.insert(l2[1]);
        if(s.size()==4)
        {
            cout<<3<<endl;
        }
        else if(s.size()==3)
        {
            cout<<2<<endl;
        }
        else if(s.size()==2)
        {
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
}