#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int q,i,n;
	string name;
	cin>>n;
	while(n--)
	{
		cin>>name;
		cin>>q;
		i=0;
		while(q)
		{
			if(name[i]=='a')
			{
				name[i]='b';
			}
			 if(name[i]=='e')
			{
				name[i]='f';
			}
			 if(name[i]=='i')
			{
				name[i]='j';
			}
			 if(name[i]=='o')
			{
				name[i]='p';
			}
			 if(name[i]=='u')
			{
				name[i]='v';
			}
			
			i=i+1;
			q--;
			
		}
		cout<<name<<endl;
	}
	return 0;
}
