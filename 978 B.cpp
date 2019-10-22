#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ans = 0;
int clen = 0;
string a;
cin>>a;
for(int i = 0;i<n;++i)
{
    if(a[i]=='x')
        ++clen;
    else
    {
        if(clen>2)
            ans+=clen-2;
        clen = 0;
    }
}
if(clen>2)
ans+=clen-2;
cout<<ans;
}
