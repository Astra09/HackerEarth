#include<iostream>
using namespace std;
int main()
{
	long long int n,m,l[300],c[300],p[300],x[300],cap,charge,i,curr=1,cost=0,j;
	cin>>n>>m;
	for(i=1;i<n;i++)
	{
		cin>>l[i];
	}
	for(i=1;i<n;i++)
	{
		cin>>c[i];
	}
	for(i=1;i<n;i++)
	{
		cin>>p[i];
	}
	for(i=1;i<=m;i++)
	{
		cin>>x[i];
	}
	for(i=1;i<=m;i++)
	{
		j=1;
		cost=0;
		cap=x[i];
		if(cap<l[j])
		{
			cout<<-1<<endl;
		}
		else
		{
		while(j<n-1)
		{
			cap=cap-l[j];
			//if(j<n-1)
			//{
			if(cap<l[j+1])
			{
				cap=cap+c[j+1];
				cost=cost+p[j+1];
			}
			//}
			j++;
		}
		cout<<cost<<endl;
		}
		
	}
	return 0;
}
