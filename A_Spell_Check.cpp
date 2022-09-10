#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s;
    int t;
    cin >> t;
    int x;
    string n;
    while (t--)
    {
        cin>>x;
        cin >> n;
        s.clear();
        bool f=1;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == 'T' || n[i] == 'i' || n[i] == 'u' || n[i] == 'r' || n[i] == 'm')
            {
                if (!s.count(n[i]))
                {
                    s.insert(n[i]);
                }
                else
                {
                    f=0;
                    cout <<"NO" << endl;
                    break;
                }
            }
            else
            {
                f=0;
                cout <<"NO" << endl;
                break;
            }
        }
        if (s.size() == 5 && f)
        {
            cout << "YES" << endl;
        }
        else if(f)
        {
            cout<<"NO"<<endl;
        }
    }
}