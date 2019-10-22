#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli n,lli k,string s,char ch)
{
lli a[n+1];
a[0] = 0;
for(int i=1;i<=n;++i)
{
    a[i] = a[i-1] ;
    if(s[i-1]==ch) ++a[i];
}
//cout<<"a = "; for(int i =0;i<=n;++i) cout<<a[i]<<" "; cout<<endl;
lli hi = n , lo = 0 , mid;
lli ans = 0;
while(hi>=lo)
{
mid = hi - (hi-lo)/2;
//check if mid length is attainable
bool flag = false;
for(int i =0;(i+mid)<=n;++i)
{
    if((a[i+mid]-a[i])>=(mid-k))
    {
        flag=true;
        break;
    }
}
if(flag)
{
    lo = mid +1;
    ans = max(ans , mid);
}
else
{
    hi = mid-1;
}
//cout<<"mid = "<<mid<<" ans = "<<ans<<" possible = "<<flag<<endl;
}
return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
lli n,k;
cin>>n>>k;
string s;
cin>>s;
cout<<max(solve(n,k,s,'a'),solve(n,k,s,'b'))<<endl;
return 0;
}
