#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int arr[s.length()];
        int k = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count++;
                int j = i;
                j++;
                while (j  < s.length() && s[j] == '1')
                {
                    count++;
                    j++;
                }
                i=j;
                arr[k] = count;
                k++;
                count = 0;
            }
        }
        int sum = 0;
        sort(arr, arr + k, greater<int>());
        for (int i = 0; i < k; i += 2)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}