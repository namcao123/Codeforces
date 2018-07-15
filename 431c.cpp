#include <iostream>
using namespace std;
int dp[102][2];

int main()
{
	int n,k,d;
	long long int mod=1000000007;
	cin>>n>>k>>d;
	dp[0][0]=1;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k && j<=i;j++)
		{
			dp[i][0]+=dp[i-j][0];
			dp[i][1]+=dp[i-j][j<d];
			dp[i][0]%=mod;
			dp[i][1]%=mod;
			
		}

	}
	cout<<dp[n][1]<<endl;

	
	return 0;
}