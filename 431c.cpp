#include <bits/stdc++.h>
using namespace std;
long long n,k,d,dp[101][2];
const long long mod=1e9+7;
int main(){
    cin>>n>>k>>d;
    dp[0][0]=1;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=k&&j<=i;++j)
            if(j<d)
                dp[i][0] = (dp[i][0] + dp[i-j][0])%mod, dp[i][1] = (dp[i][1] + dp[i-j][1])%mod;
            else
                dp[i][1] = (dp[i][1] + dp[i-j][0] + dp[i-j][1])%mod;
    cout<<dp[n][1];
}