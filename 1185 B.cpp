#include<bits/stdc++.h>

using namespace std;
string solve(string s,string t)
{
    vector<pair<char,int>> p,q;
    p.push_back(make_pair(s[0],1));
    for(int i=1;i<s.length();++i)
        if(s[i]==s[i-1])
        ++p.back().second;
        else
            p.push_back(make_pair(s[i],1));

    q.push_back(make_pair(t[0],1));
    for(int i=1;i<t.length();++i)
        if(t[i]==t[i-1])
        ++q.back().second;
        else
            q.push_back(make_pair(t[i],1));
if(p.size()!=q.size())
    return "No";
for(int i=0;i<p.size();++i)
{
    if( (p[i].first==q[i].first) && (p[i].second<=q[i].second))
       continue;
    else
        return "No";
}
return "Yes";
}
int main()
{
int n;
cin>>n;
string s,t;
while(n--)
{
cin>>s>>t;
cout<<solve(s,t)<<endl;
}
}
