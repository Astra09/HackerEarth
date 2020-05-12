#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
	long long int n,m,q;
	cin>>n>>m;
	long long int a[n+1],c[m+1];
	for(long long int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long int i=1;i<=m;i++)
	{
		cin>>c[i];
	}
	cin>>q;
	while(q--)
	{
		long long int l,r;
		cin>>l>>r;
		unordered_map<int, vector> frq;
		for(long long int i=1;i<=n;i++)
		{
			frq[a[i]].push_back(i);
		}	
		int flag=1;
		for (auto x : frq) 
      		for(int i=1;i<=x.second.size();i++)
      		{
      			if((x.second[i]>=l and x.seconf[i]<=r)==false )
      			{
      				flag=0;
      				break;
				  }
			  }
		if(flag==1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
		
		sort(uq.begin(),uq.end());
		uq.erase(unique(uq.begin(),uq.end()))
	}
}
