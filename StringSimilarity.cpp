#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        char w[n];
        for(int j=0; j<n; j++)
            w[j]='0';
        int i=0;
        while(i+n<=2*n-1)
        {
            string sub=s.substr(i,n);
            for(int j=0; j<n; j++)
            {
                if(w[j]==sub[j])
                {
                    break;
                }    
                if(j==i)
                {
                    w[j]=sub[j];
                    break;
                }
            }
            i++;
        }
        for(int j=0; j<n; j++)
            cout<<w[j];
        
        cout<<endl;
    }
}