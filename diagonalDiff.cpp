#include<iostream>
#include<vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int l = arr.size();
    int p=0;
    int s=0;
    for(int i=0; i<l; i++) 
    {
        p = p + arr[i][i];
        s = s + arr[i][l-i-1];
    }
    int diff = abs(p-s);
    return diff;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<diagonalDifference(arr);
}