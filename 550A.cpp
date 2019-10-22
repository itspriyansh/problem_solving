#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool search_string(string s,string a,string b)
{
    auto x = s.find(a);
    if(x==string::npos)
        return false;
    string t = s;
    auto y = x;
    x = s.substr(0,x).find(b);
    if(x!=string::npos)
        return true;
    y = s.substr(y+a.length(),t.length()-y-a.length()+1).find(b);
    if(y!=string::npos)
        return true;
    return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
string s;

cin>>s;
if(search_string(s,"AB","BA") || search_string(s,"BA","AB"))
    cout<<"YES"<<endl;
else cout<<"NO\n"<<endl;

return 0;
}
