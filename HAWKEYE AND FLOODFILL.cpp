#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int x,y,p,diff;
	cin>>n;
	cin>>x>>y>>p;
	long long int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==x and j==y)
			{
				ar[i][j]=p;
			}
			else if(i==x)
			{
				diff=abs(y-j);
				if(p-diff>=0)
				ar[i][j]=p-diff;
				else
				ar[i][j]=0;
			}
			else if(j==y)
			{
				diff=abs(x-i);
				if(p-diff>=0)
				ar[i][j]=p-diff;
				else
				ar[i][j]=0;
			}
			else
			{
				diff=max(abs(x-i),abs(y-j));
				if(p-diff>=0)
				ar[i][j]=p-diff;
				else
				ar[i][j]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}
