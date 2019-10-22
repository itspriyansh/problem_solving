#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int len = sqrt(2*n);
string ans,a;
cin>>a;
for(int i=0,j=0;i<n,j<len;++j,i+=j)
{
ans = ans + a[i];
}
cout<<ans;
}
