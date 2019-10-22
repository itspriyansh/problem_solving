#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s; cin>>s;
int sea=0 ,fra=0;
for(int i=0;i<(n-1);++i)
{
    if(s[i]=='S' && s[i+1]=='F') ++sea;
    if(s[i]=='F' && s[i+1]=='S') ++fra;
}
if(sea>fra)
    cout<<"YES";
else
    cout<<"NO";
}

