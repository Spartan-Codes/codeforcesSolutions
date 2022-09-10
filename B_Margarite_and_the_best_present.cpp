#include<iostream>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        l--;
        int sumr,suml;
        if(r%2==0)
            sumr=r/2;
        else
            sumr=(r-1)/2-r;

        if(l%2==0)
            suml=l/2;
        else
            suml=(l-1)/2-l;
        
        cout<<sumr-suml<<endl;
    }
}