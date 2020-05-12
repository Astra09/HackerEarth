#include<iostream>
using namespace std;
int main()
{
	long long int n,m,k,a,b,q,p,x,day=1,j,count=0,i;
	cin>>n>>m>>k;
	long long int fr[n][n],rew[n],happy[n];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fr[i][j]=0;
		}
		rew[i]=0;
		happy[i]=0;
	}
	while(m--)
	{
		cin>>a>>b;
		fr[a][b]=1;
		fr[b][a]=1;
	}
	cin>>q;
	while(q--)
	{
		cin>>p>>x;
		rew[p]=rew[p]+x;
		if(rew[p]>=k)
		{
			for(j=1;j<=n;j++)
			{
				if(fr[p][j]==1 && happy[j]==0)
				{
					happy[j]=day;
					count=count+1;
					if(count==n)
					{
						break;
					}
				}
			}
		}
		day++;
	}
	for(j=1;j<=count;j++)
	{
		cout<<happy[j]<<" ";
	}
	return 0;
}
