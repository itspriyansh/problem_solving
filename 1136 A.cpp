#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n][2];
for(int i=0;i<n;++i)
    cin>>a[i][0]>>a[i][1];
int ans = n,k;
cin>>k;
for(int i=0;i<n;++i)
    if(k>a[i][1])
        --ans;
    else
        break;
cout<<ans;

}
