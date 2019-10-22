#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+1];
    for(int i=0;i<=m;++i) a[i] = 0;
    int l,r,ans = m;
    while(n--)
    {
        cin>>l>>r;
        for(int i=l;i<=r;++i)
            if(a[i]!=1)
            {
                a[i] = 1;
                --ans;
            }
    }
    cout<<ans<<endl;
    for(int i=1;i<=m;++i)
        if(a[i]==0)
        cout<<i<<" ";
    cout<<endl;
}
