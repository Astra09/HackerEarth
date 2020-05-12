#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int r,k,res=0;
		cin>>r>>k;
		for(int i=1;i<=r;i++)
		{
			string s=bitset<32>(i).to_string();
			long long int count=0;
			for(int j=0;j<s.length()-2;j++)
			{
				if(s[j]=='1' and s[j+1]=='0' and s[j+2]=='1')
				{
					count+=1;
				}
			}
			if(count>=k)
			{
				res+=1;
			}
		}
		cout<<res<<endl;
	}
}
