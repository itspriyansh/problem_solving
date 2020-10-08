class Solution {
public:
    int numDecodings(string s) {
        int l=s.size();
        int dp[l+1];
        dp[0]=1;
        for(int i=1;i<=l;i++){
            dp[i]=dp[i-1];
            if(s[i-1]=='0') dp[i]=0;
            if(i>1 && (s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6'))) {
                dp[i]+=dp[i-2];
            }
        }
        return dp[l];
    }
};
