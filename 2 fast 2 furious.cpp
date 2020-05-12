#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,neg=0;
	cin>>n;
	vector <long long int > dom;
	vector <long long int >b;
	for(long long int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		dom.push_back(abs(d-neg));
		neg=d;
	}
	neg=0;
	for(long long int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		b.push_back(abs(d-neg));
		neg=d;
	}
	sort(dom.begin(),dom.end());
	sort(b.begin(),b.end());
	if(b[n-1]>dom[n-1])
	{
		cout<<"Brian"<<endl;
		cout<<b[n-1];
	}
	else if(b[n-1]<dom[n-1])
	{
		cout<<"Dom"<<endl;
		cout<<dom[n-1];
	}
	else
	{
		cout<<"Tie"<<endl;
		cout<<dom[n-1];
	}
}
