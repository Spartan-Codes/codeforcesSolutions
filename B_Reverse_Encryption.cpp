#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin >> s;
    int l = 1;
    while (l<=n)
    {
        if(n%l==0)
            reverse(s.begin(),s.begin()+l);
        
        l++;
    }
    cout<<s;
}