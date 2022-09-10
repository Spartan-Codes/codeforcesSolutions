#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
     int currentSum=0;
     int maxSum = INT_MIN;
     for(int i=0; i<n; i++)
     {
         currentSum += arr[i];
         if(currentSum<0)
         {
             currentSum=0;
         }
        maxSum = max(maxSum, currentSum);
     }

     return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int wrapSum = kadane(arr, n);
    int nonWrapSum;
    int totalSum=0;
    for(int i=0; i<n; i++)
    {
        totalSum+=arr[i];
        arr[i] = -1*arr[i];
    }
    nonWrapSum = totalSum + kadane(arr, n);
    cout<<max(wrapSum, nonWrapSum);
    
    return 0;
}