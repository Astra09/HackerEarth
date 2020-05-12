#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <long long int> v;
		vector <long long int >res;
		long long int n;
		cin>>n;
		for(long long int i=0;i<n;i++)
		{
			long long int d;
			cin>>d;
			v.push_back(d);
		}
		for(long long int i=0;i<n;i++)
		{
			long long int ind;
			ind=v[i]-1;
			res.push_back(v[ind]);
		}
		int flag=1;
		for(long long int i=0;i<n;i++)
		{
			if(v[i]!=res[i])
			{
				flag=0;
				break;
			}
		}
		
		if(flag==1)
		cout<<"inverse"<<endl;
		else
		cout<<"not inverse"<<endl;
	}
}
