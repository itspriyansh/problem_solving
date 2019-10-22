#include<bits/stdc++.h>
using namespace std;
int  main()
{
int n,m;
cin>>n>>m;
int a[n],ent;
map<int,int> f;
for(int i=0;i<n;++i)
    cin>>a[i];
while(m--)
{
    cin>>ent;
    f[ent] = 1;
}
int s = n,e=0;
for(int i=0;i<n;++i)
    if(f[a[i]]==1)
        cout<<a[i]<<" ";

}
