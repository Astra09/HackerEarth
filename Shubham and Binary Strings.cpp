#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,cc=0;
		string b;
		cin>>n;
		cin>>b;
		for(int i=0;i<n;i++)
		{
			if(b[i]=='1')
			{
				cc+=1;
			}
		}
		cout<<(n-cc)<<endl;
	}
}
