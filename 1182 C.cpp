#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
long n;
cin>>n;
map<lli,vector<string>> m;
string s;
while(n--)
{
cin>>s;
lli c = 0;
for(auto &i: s)
    if(i=='a' || i=='e' || i=='o' || i=='i' || i=='u')
    ++c;
m[c].push_back(s);
}


return 0;
}
