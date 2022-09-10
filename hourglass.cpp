#include <iostream>
using namespace std;

int hourglass(int arr[6][6])
{
    int maxSum = -99999;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            int sum = 0;
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            sum = sum + arr[i+1][j+1];
            sum = sum + arr[i+2][j] + arr[i+2][j + 1] + arr[i+2][j + 2];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0; j<6; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<hourglass(arr);

}