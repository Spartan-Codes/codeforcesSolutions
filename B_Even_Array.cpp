#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int x;
    while (t--)
    {
        cin >> n;
        int Eg = 0;
        int Og=0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (i % 2==0 && x%2==1)
                Eg++;
            
            if(i%2==1 && x%2==0)
                Og++;
        }
        if(Eg==Og)
            cout<<Eg<<endl;
        else
            cout<<-1<<endl;
    }
}