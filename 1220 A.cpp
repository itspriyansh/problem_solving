#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int z=0,o=0;
for(auto &i : s)
    if(i=='z') ++z;
    else if(i=='n') ++o;

for(int i =0;i<o;++i) cout<<"1 ";
for(int i =0;i<z;++i) cout<<"0 ";


return 0;
}
