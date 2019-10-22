#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(lli a,lli b)
{
    if(a<=b)
    return false;
    else
    {
        if((a+b)
    }
}
int main()
{
lli n;
cin>>n;
lli a[n];
for(int i=0;i<n;++i)
    cin>>a[i];
sort(a,a+n,cmp);
for(int i=0;i<n;++i)
    cout<<a[i]<<" ";
return 0;
}
