#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
long int ans = 0;
map<string ,int> m;
m["Tetrahedron"] = 4;
m["Cube"] = 6;
m["Octahedron"] = 8;
m["Dodecahedron"] = 12;
m["Icosahedron"] = 20;
string s;
while(n--)
{
cin>>s;
ans+=m[s];
}
cout<<ans;
return 0;
}
