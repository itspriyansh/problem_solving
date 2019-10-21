class Solution {
public:
    bool isMatch(string s, string p) {
      int n = s.length(), m = p.length();
      vector<vector<bool> > dp (n+1 , vector<bool>(m +1 ));
      dp[n][m] = true;
      for(int i=n;i>=0;i--) {
        for(int j=m-1;j>=0;j--) { 
          if(p[j] == '*' ) continue;
          int next = 1; 
          if(j < m-1 && p[j+1] == '*') next = 2;
          if(i == n && next == 2) dp[i][j] = dp[i][j+next];
          if(i == n) continue;
          if(p[j] == '.' || p[j] == s[i]) {  
            if(next == 1) dp[i][j] = true && dp[i+1][j+1];
            else dp[i][j] = true && (dp[i+1][j+next] || dp[i][j+next] || dp[i+1][j] );    
          } else if(next == 2 ) 
            dp[i][j] = dp[i][j+next];
        }
      }
      return dp[0][0];
    }
};
