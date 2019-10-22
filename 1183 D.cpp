#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
int q;
cin>>q;
while(q--)
{
    lli n;
    cin>>n;
    lli ans = 0,ent;
    lli a[n+1];
    for(lli i=1;i<=n;++i)
        a[i]= 0;
    for(lli i=0;i<n;++i)
    {
        cin>>ent;
        a[ent]++;
    }

    sort(a+1,a+n+1);
    lli k = a[n],z = 0;
    for(lli i = n;i>0;--i)
    {
        lli add =  max(z, min(a[i],k));
        ans += add;
        k = add -1;
    }
    cout<<ans<<endl;

}
return 0;
}
