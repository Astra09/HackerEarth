#include<iostream>
using namespace std;
int main()
{
	int n,i,step=0;
	cin>>n;
	while(n!=0)
	{
		for(i=5;i>0;i--)
		{
			if(n>=i)
			{
				step=step+1;
				n=n-i;
				cout<<n<<endl;
				break;
			}
			
		}
	}
	cout<<step;
}
