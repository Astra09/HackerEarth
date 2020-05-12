#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector <long long int > v;
	for(long long int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		v.push_back(d);
	}
    sort(v.begin(),v.end());
	long long int q;
	cin>>q;
	long long int typ,r;
	while(q--)
	{
		cin>>typ>>r;
		if(typ==0)
		{
			auto x=lower_bound(v.begin(),v.end(),r);
			cout<<(n-(x-v.begin()))<<endl;
		}
		else if(typ==1)
		{
			auto x=upper_bound(v.begin(),v.end(),r);
			cout<<(n-(x-v.begin()))<<endl;
		}
	}
}
