#include<bits/stdc++.h>
using namespace std;
int check(string s);
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int k;
		string s;
		cin>>s>>k;
		if(s.length()%k==0)
		{
			long long int kk=s.length()/k;
			long long flag=0;
			for(long long int i=0;i<s.length();i+=kk)
			{
				if(check(s.substr(i,kk)))
				{
					flag+=1;
				}
			}
			if(flag==k)
			{
				cout<<"YES"<<endl;
				
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
int check(string s)
{
	for(long long int i=0;i<s.length();i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			return 0;
		}
	}
	return 1;
}
