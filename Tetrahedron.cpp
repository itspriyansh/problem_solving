#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
lli n;
cin>>n;
lli a0,a1,b0,b1,c0,c1,d0,d1;
a0 =1;
b0 = 1;
c0 = 1;
d0 = 0;
for(int i=2;i<=n;++i)
{
    a1 = (b0+c0+d0)%mod;
    b1 = (a0+c0+d0)%mod;
    c1 = (a0+b0+d0)%mod;
    d1 = (a0+b0+c0)%mod;
    a0=a1; b0=b1; c0=c1; d0=d1;
}
cout<<d0%mod<<endl;
return 0;
}
