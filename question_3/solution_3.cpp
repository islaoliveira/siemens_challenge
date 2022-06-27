#include <bits/stdc++.h>
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


void ConcatRemove(string s, string t, int k) {

    int n = s.size();
    int m = t.size();
    
    int p = lcs(s,t);

    int minimumOperations = (n-p)+(m-p);
    
    if (minimumOperations==k) {
        printf("yes");
    }                           
    else {
        printf("no");
    } 

}


int main() {

    printf("Enter the starting string:\n");
    char s[100];
    cin.getline(s,100);

    printf("Enter the desired string:\n");
    char t[100];
    cin.getline(t,100);

    printf("Enter an string that represents the number of operations:\n");
    int k;
    scanf("%d", &k);

    if (is_lower_ascii(s) == false || is_lower_ascii(t) == false || k > 100) {
        printf("Check the input constrains");
        exit(0);
    }

    ConcatRemove(s, t, k);

}