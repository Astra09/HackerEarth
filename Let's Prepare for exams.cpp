#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k,flag;
		cin>>k;
		int ar[7];
		for(int i=0;i<7;i++)
		{
			cin>>ar[i];
		}
		for(int i=1;i<7;i++)
		{
			ar[i]+=ar[i-1];
		}
		
		for(int i=0;i<7;i++)
		{
			if(ar[i]>0)
			{
				long long int rem;
				rem=k/ar[i];
				if(rem*k==ar[i])
				{
					flag=i;
					break;
				}
			}
			
		}
		if(flag==0)
		cout<<"MONDAY"<<endl;
		else if(flag==1)
		cout<<"TUESDAY"<<endl;
		else if(flag==2)
		cout<<"WEDNESDAY"<<endl;
		else if(flag==3)
		cout<<"THURSDAY"<<endl;
		else if(flag==4)
		cout<<"FRIDAY"<<endl;
		else if(flag==5)
		cout<<"SATURDAY"<<endl;
		else if(flag==6)
		cout<<"SUNDAY"<<endl;
	}
}
