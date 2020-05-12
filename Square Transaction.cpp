#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector <long long int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		if(i>0)
		{
			d=d+v[i-1];
		}
		v.push_back(d);
	}
	long long int q,r;
	cin>>q;
	while(q--)
	{
		cin>>r;
		auto x=lower_bound(v.begin(),v.end(),r);
        if(x==v.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<x-v.begin()+1<<endl;
        }
		
	}
}
