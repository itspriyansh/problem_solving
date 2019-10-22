#include<bits/stdc++.h>
using namespace std;

int main()
{
string t;
cin>>t;
string h[5];
for(int i=0;i<5;++i)
    cin>>h[i];
for(int i=0;i<5;++i)
    if(h[i][0]==t[0] || h[i][1]==t[1])
{
    cout<<"YES\n";
    return 0;
}
cout<<"NO\n";
return 0;
}
