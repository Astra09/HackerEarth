#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		long long int q,n;
		cin>>n>>q;
		cin>>s;
		while(q--)
		{
			long long int l,r;
			cin>>l>>r;
			string res="";
			for(long long int i=l;i<=r;i++)
			{
				res+=s[i-1];
			}
			int ch[26]={0};
			for(long long int j=0;j<res.length();j++)
			{
			int index=int(res[j]);
			ch[index-97]+=1;
			}
			int flag=1;
			if((s.length())%2==0)
			{
				for(int i=0;i<26;i++)
				{
					if((ch[i]%2)!=0)
					{
						flag=0;
						break;
					}
				}
			}
			else
			{
				int cc=0;
				for(int i=0;i<26;i++)
				{
					if((ch[i]%2)!=0)
					{
						cc+=1;
					}
				}
				if(cc>1)
				{
					flag=0;
				}
			}
			if(flag==1)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}	
		}
		
	}
}
