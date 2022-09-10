#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    priority_queue<int> pq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        pq.push(x);
    }
    int part=0;
    int c=0;
    while(part <= sum/2)
    {
        part += pq.top();
        pq.pop();
        c++;
    }
    cout<<c;
}