#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
lli n;
cin>>n;
lli a[n],neg = 0;
for(lli i=0;i<n;++i)
{
    cin>>a[i];
    if(a[i]<0)
        ++neg;
}
sort(a,a+n);
for(int i= n-2;i>=0;i-=2)
{
    if(a[i]>=0 && a[i+1]>=0)
    {
        a[i] = -a[i]-1;
        a[i+1] = -a[i+1] -1;
    }
}
int pos = n-1;
if(neg%2==1)
{
for(int i = 0;i<n;++i)
{
    if(a[i]>=0)
    {
        pos = i-1;
        break;
    }
}
a[pos] = -a[pos] - 1;
}
for(int  i=0;i<n;++i) cout<<a[i]<<" ";
return 0;
}
