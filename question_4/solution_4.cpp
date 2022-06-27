#include <bits/stdc++.h>
#include <assert.h>
using namespace std;


int lcs(string s, string t) {
    
    int n=s.size();
    int m=t.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }

    for(int i=0;i<=m;i++){
        dp[0][i] = 0;
    }
    
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s[ind1-1]==t[ind2-1])
                dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
            else
                dp[ind1][ind2] = 0 + max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
        }
    }
    
    return dp[n][m];
}


bool is_lower_ascii(const string& txt)
{
  for(char c : txt)
  {
    if (!((c >= 'a' and c <= 'z') or (c == ' '))) return false;
  }
  return true;
}


bool ConcatRemove(string s, string t, int k) {

    int n = s.size();
    int m = t.size();
    
    int p = lcs(s,t);

    int minimumOperations = (n-p)+(m-p);
    
    if (minimumOperations==k) {
        printf("yes");
        return true;
    }                           
    else {
        printf("no");
        return false;
    } 
}


int main() {

    // Unit test

    bool right_k = ConcatRemove("blabla", "blable", 2);
    assert(right_k == true);

}