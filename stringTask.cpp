#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    string t = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //. insert
    for (char c: s)
    {
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            continue;
        else
        {
            t += '.';
            t += c;
        }
    }
    cout << t;
}