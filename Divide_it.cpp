#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    long long int n;
    while (q--)
    {
        cin >> n;
        int count=0;
        while(n%3==0)
        {
            count++;
            n=(2*n)/3;
        }
        while(n%5==0)
        {
            count++;
            n=(4*n)/5;
        }
        while(n%2==0)
        {
            count++;
            n=n/2;
        }
        if(n==1)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
    }
}