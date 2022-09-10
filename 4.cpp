#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    char a;
    int t;
    int i1,i2;
    while(cin>>a)
    {
        if(a == '\n')
            break;
        else
        {
            t = a - '0';
            v.push_back(t);
        }
    }
   // int n;
    //cin>>n;
    cout<<v.size();
   /* for(int i=0; i<v.size(); i++)
    {
        int x = n - v[i];
        for(int j=i+1; j<v.size(); j++)
        {
            if (v[j]==x)
            {
                i1 = i;
                i2 = j;
            }
            
        }
    }
    cout<<v.size()-i1<<" "<<v.size()-i2; */

}