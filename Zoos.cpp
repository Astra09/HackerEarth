#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string name;
	int cz=0,co=0,i;
	cin>>name;
	for(i=0;i<name.length();i++)
	{
		if(name[i]=='z')
		{
			cz=cz+1;
		}
		else if(name[i]=='o')
		{
			co=co+1;
		}
		
	}
	if(2*cz==co)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
	return 0;
}
