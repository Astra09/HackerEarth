#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector <long long int > v,p;
    for(long long int i=0;i<n;i++)
    {
        long long int d;
        cin>>d;
        v.push_back(d);
    }
    for(long long int i=0;i<n;i++)
    {
        long long int d;
        cin>>d;
        p.push_back(d);
    }
    long long int res=0;
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    //reverse(p.begin(),p.end());
    for(int i=0;i<n;i++)
    {
    	cout<<v[i]<<" "<<p[i]<<endl;
	}
    for(long long int i=0;i<n;i++)
    {
        res=res+(v[i]*p[i]);
    }
    cout<<res;
}
