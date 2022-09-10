#include <iostream>
#include <vector>
using namespace std;

const int N = 1e2 + 5;

char a[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v;
    int count = 0;
    int f = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'B' && f == 0)
        {
            count++;
            sum++;
            f = 1;
        }
        else if(a[i]=='B' && f==1)
        {
            sum++;
        }
        if(a[i]=='W')
        {
            f=0;
            if(sum!=0)
                v.push_back(sum);
            
            sum=0;
        }
    }
    if(sum!=0)
        v.push_back(sum);
    cout<<count<<endl;
    for(int i=0; i<count;i++)
        cout<<v[i]<<" ";
}