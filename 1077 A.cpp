
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long int a,b,k,ans;
    cin>>a>>b>>k;
    ans = (k/2)*(a-b);
    if(k&1)
        ans +=a;
    cout<<ans<<endl;

}
}
