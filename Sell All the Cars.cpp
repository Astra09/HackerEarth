#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		long long int n,e=1000000007;
		cin>>n;
		vector <long long int> v;
		for(long long int i=0;i<n;i++)
		{	
			long long int d;
			cin>>d;
			v.push_back(d);
		
		}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			v[i]=v[i]-i;
			if(v[i]<0)
			{
				v[i]=0;
			}
		}
		cout<<(accumulate(v.begin(),v.end(),0))%e<<endl;
		
	}
}
