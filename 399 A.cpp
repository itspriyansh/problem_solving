#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,p,k;
cin>>n>>p>>k;
string ans = "("+to_string(p)+")";
for(int i=1;i<=k;++i)
{
    if((p-i)>0)
        ans = to_string(p-i)+" "+ans;
    else
        break;
}
for(int i=1;i<=k;++i)
{
    if((p+i)<=n)
        ans = ans+" "+to_string(p+i);
    else
        break;
}
if(k<(p-1))
    ans = "<< "+ans;
if((n-p)>=k)
    ans = ans +" >>";
cout<<ans<<endl;
}
