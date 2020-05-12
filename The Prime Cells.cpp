#include<bits/stdc++.h>
using namespace std;
int check(int);
int main()
{
	int n,cc=0;
	cin>>n;
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		int tsum=0;
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				if(j==0)
				{
					tsum=ar[i][j+1]+ar[i+1][j];
					if(check(tsum))
					{
						cc+=1;
					}
				}
				else if(j==n-1)
				{
					tsum=ar[i][j-1]+ar[i+1][j];
					if(check(tsum))
					{
						cc+=1;
					}
				}
				else
				{
					tsum=ar[i][j+1]+ar[i+1][j]+ar[i][j-1];
					if(check(tsum))
					{
						cc+=1;
					}
				}
			}
			else if(i==n-1)
			{
				if(j==0)
				{
					tsum=ar[i][j+1]+ar[i-1][j];
					if(check(tsum))
					{
						cc+=1;
					}
				}
				else if(j==n-1)
				{
					tsum=ar[i][j-1]+ar[i-1][j];
					if(check(tsum))
					{
						cc+=1;
					}
				}
				else
				{
					tsum=ar[i][j+1]+ar[i-1][j]+ar[i][j-1];
					if(check(tsum))
					{
						cc+=1;
					}
				}
			}
			else if(j==0)
			{
					tsum=ar[i][j+1]+ar[i+1][j]+ar[i-1][j];
					if(check(tsum))
					{
						cc+=1;
					}
			}
			else if(j==n-1)
			{
					tsum=ar[i][j-1]+ar[i+1][j]+ar[i-1][j];
					if(check(tsum))
					{
						cc+=1;
					}
			}
			else
			{
				tsum=ar[i][j+1]+ar[i+1][j]+ar[i-1][j]+ar[i][j-1];
					if(check(tsum))
					{
						cc+=1;
					}
			}
		}
	}
	cout<<cc;
}

int check(int nn)
{
	for(int i=2;i<=nn/2;i++)
	{
		if(nn%i==0)
		{
			return 0;
		}
	}
	return 1;
}
