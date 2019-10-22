#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
lli prod = 1;
lli n;
cin>>n;
lli a[n][n];
for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
    {cin>>a[i][j]; if(i!=j) prod*=a[i][j]; }
prod = pow( prod , 1.00000000 /(double)(2*n-2));
for(int i = 0;i<n;++i)
{
    lli cp = 1;
    for(int j=0;j<n;++j)
    {
        if(i!=j) cp*=a[i][j];
    }
    cout<<pow( cp/prod , 1.0000000/(double)(n-2) )<<" ";
}
return 0;
}
