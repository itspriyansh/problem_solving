#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,k,ans = 0;
cin>>n>>k;
ans += ceil((n*2.00)/k);
ans += ceil((n*5.00)/k);
ans += ceil((n*8.00)/k);
cout<<ans;
}
