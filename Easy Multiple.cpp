#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        for(long long int i=3;i<n;i++)
        {
            if(i%3==0 || i%5==0)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}
