#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int x;
    set<int> s;
    int count;
    while(t--)
    {
        cin>>n;
        count=0;
        s.clear();
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(!s.count(x))
                s.insert(x);
            else
                count++;
        }
        cout<<n - count<<endl;
    }
}