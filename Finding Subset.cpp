#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long long int n;
	 cin>>n;
	 vector <long long int >v;
	 list<long long int >l;
	 v.reserve(n);
	 for(long long int i=0;i<n;i++)
	 {
	 	long long int d;
	 	cin>>d;
	 	v.push_back(d);
	 	l.push_back(d);
	 }
	 sort(v.begin(),v.end());
	 vector<long long int>::iterator it; 
  	 it = v.begin(); 
	 if(v[0]==1)
	 {
	 	for(long long int i=1;i<v.size();i++)
	 	{
	 		double mm=cbrt(v[i]);
	 		if(mm==int(mm))
	 		{
	 			l.remove(v[i]);
	 			v.erase(it+i);
	 			
			 }
		}
	 }
	 reverse(v.begin(),v.end());
	 long long int cc=0;
	 for(long long int i=0;i<v.size();i++)
	 {
	 	int flag=1;
	 	for(long long int j=0;j<v.size();j++)
	 	{
	 		if(i!=j and v[i]!=v[j])
	 		{
	 			double tmp=cbrt(v[i]*v[j]);
	 			
	 			if(tmp==int(tmp))
	 			{
	 				long long int mm=min(v[i],v[j]);
	 				list <long long int>:: iterator it;
					it=find(l.begin(),l.end(),mm);
	 				if(it!=l.end())
	 				{
	 					l.remove(mm);
					 }
				}
			}
	 		
		}
	 }
	 cout<<l.size();
}
