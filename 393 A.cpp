#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int a[26]={0};
for(auto &i : s)
    a[i-'a']++;
string t = "nineteen";
int b[26]={0};
for(auto &i : t)
    b[i-'a']++;
int ans = INT_MAX;
if(a['n'-'a']%2==1 && a['n'-'a']>4)
    a['n'-'a']++;
for(int i=0;i<26;++i)
{
    if(b[i]>0)
        {
            a[i] = a[i]/b[i];
            ans = min(ans , a[i]);
        }

}
cout<<ans<<endl;
}
