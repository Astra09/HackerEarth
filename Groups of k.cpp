#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,k,i,j,pcount;
	double len;
	string ss,snew;
	cin>>t;
	while(t--)
	{
		j=0;
		snew="";
		pcount=0;
		cin>>ss>>k;
		len=ss.length();
		if((len/k)<=k-1)
		{
			cout<<-1;
		}
		else
		{
			for(i=0;i<len;i++)
			{
				j++;
				snew=snew+ss[i];
				if(j==k && i<len-1)
				{
					j=0;
					snew=snew+'-';
					pcount=pcount+1;
				}
				if(pcount==k-1)
				{
					cout<<i<<endl;
					if(len-i>k || len-i<k-1)
					{
						snew=-1;
						goto step;
					}
				}
			}
			
		}	
		step:
		cout<<snew<<endl;	
		}
		
		return 0;
	}
	
