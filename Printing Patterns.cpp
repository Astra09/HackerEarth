#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	long long int x,y,p,diff;
	cin>>r>>c>>x>>y;
	long long int ar[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==x and j==y)
			{
				ar[i][j]=0;
			}
			else if(i==x)
			{
				diff=abs(y-j);
				ar[i][j]=diff;
			}
			else if(j==y)
			{
				diff=abs(x-i);
				ar[i][j]=diff;
				
			}
			else
			{
				diff=max(abs(x-i),abs(y-j));
				ar[i][j]=diff;
			
			}
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}
