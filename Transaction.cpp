#include<iostream>
using namespace std;
int main()
{
	long long int t,q,i,m,n;
	cin>>t>>q;
	long long int a[t];
	for(i=1;i<=t;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		cin>>m>>n;
		long long int count=0,num;
		for(i=1;i<=t;i++)
		{
			if(a[i]>=m)
			{
				count=count+1;
				num=a[i];
			}
			if(count==n)
			{
				break;
			}
			else
			{
				num=-1;
			}
		}
		cout<<num;
	}
	return 0;
}
