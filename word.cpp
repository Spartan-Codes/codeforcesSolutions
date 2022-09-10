#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int u = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            u++;
        else
            l++;
    }
    if (u > l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else if(l>u)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout<<s;
}