#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
int n,K;
cin>>n>>K;
lli dp[K+1][n+1];
for(int i = 1;i<=n;++i) dp[1][i] = 1;
for(int i = 2; i<=K;++i)
{
    for(int j = 1;j<=n;++j)
    {
        dp[i][j] = 0;
        int lim = sqrt(j)+1;
        for(int k = 1;k<lim;++k)
        {
            if(j%k==0) {
            if((j/k)==k)
                {
                    dp[i][j]+=dp[i-1][k];
                    dp[i][j]%=mod;
                }
            else
            {
                dp[i][j]+=(dp[i-1][k]%mod+dp[i-1][j/k]%mod);
                dp[i][j]%=mod;
            }
            }
        }
    }
}
//for(int i= 1;i<=K;++i) {for(int j = 1;j<=n;++j)  cout<<dp[i][j]<<" "; cout<<endl;}
lli ans = 0;
for(int i = 1;i<=n;++i)
    {ans+=dp[K][i]; ans%=mod;}
cout<<ans%mod<<endl;

return 0;
}
