#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void plusMinus(vector<int> arr)
{
    float l = arr.size();
    float p = 0;
    float m = 0;
    float z = 0;
    for(int i=0; i<l; i++)
    {
        if(arr[i]==0)
        {
            z++;
        }
        else if(arr[i]<0)
        {
            m++;
        }
        else
        {
            p++;
        }
        p = p/l;
        m = m/l;
        z = z/l;
        cout<<setprecision(6)<<p<<endl<<m<<endl<<z;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    plusMinus(arr);
}