#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
long q;
cin>>q;
while(q--)
{
lli k,n,a,b,ans = -1;
cin>>k>>n>>a>>b;
if(k>(b*n))
{
lli lo  = 0 , hi = n;
lli mid;
while(lo<=hi)
{
    mid = lo + (hi-lo)/2;
    if((k - mid*a - (n-mid)*b) > 0)
    {
        lo = mid+1;
        ans = mid;
    }
    else
        hi = mid-1;
}
cout<<ans<<endl;
}
else
cout<<"-1"<<endl;
}

return 0;
}
