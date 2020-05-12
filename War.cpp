#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,t,n,sa,sb,j;
	cin>>t;
	while(t--)
	{
		vector <long long int> bb;
		vector <long long int> aa;
		sa=0;
		sb=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			long long int d;
			cin>>d;
			bb.push_back(d);
		}
		for(i=1;i<=n;i++)
		{
			long long int d;
			cin>>d;
			aa.push_back(d);
		}
		sa=accumulate(aa.begin(),aa.end(),0);
		sb=accumulate(bb.begin(),bb.end(),0);
		if(sb<sa)
		cout<<"Alice"<<endl;
		else if(sa<sb)
		cout<<"Bob"<<endl;
		else
		cout<<"Tie"<<endl;
	}
	return 0;
}
