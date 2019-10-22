#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c;
cin>>a>>b>>c;
long long int ans = 0;
ans = 2*c + 2*min(a,b);
if(a!=b)
    ++ans;
cout<<ans;
return 0;
}
