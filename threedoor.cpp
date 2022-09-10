#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    int arr[4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0];
        cin >> arr[1] >> arr[2] >> arr[3];
        if(arr[arr[0]] !=0 && arr[1]!=1 && arr[2]!=2 && arr[3]!=3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}