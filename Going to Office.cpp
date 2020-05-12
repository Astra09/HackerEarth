#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int d,oc,of,od,cs,cb,cm,cd,ponl,pcc;
    ponl=0;
    pcc=0;
    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;
    if(d<=of)
    {
        ponl=oc;
    }
    else
    {
        ponl=oc+((d-of)*od);
    }
    pcc=cb+(cd*d)+((d/cs)*cm);
    if(ponl<pcc)
    {
        cout<<"Online Taxi";
    }
    else
    {
        cout<<"Classic Taxi";
    }
    
}
