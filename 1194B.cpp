#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int q;
cin>>q;
while(q--)
{
    lli m,n;
    cin>>n>>m;
    string a[n];
    for(int i = 0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<solve(a,n,m)<<endl;
}

return 0;
}
