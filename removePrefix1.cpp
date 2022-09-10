#include<bits/stdc++.h>
#define int long long
const int M=2e5+10;
using namespace std;
int mp[M];

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(mp,0,sizeof(mp));
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int pos=-1;
		for(int i=n-1;i>=0;i--)
		{
			if(mp[a[i]]==0){
				mp[a[i]]++;
			}else{
				pos=i;
				break;
			}
		}
		if(pos!=-1)
			cout<<pos+1<<endl;
		else
			cout<<0<<endl;
	}
}
