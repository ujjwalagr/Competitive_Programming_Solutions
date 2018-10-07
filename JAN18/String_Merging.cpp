#include <bits/stdc++.h>
using namespace std;
 
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 
int t;
cin >> t;
while(t--)
{
	int m,n;
	cin >> m >> n;
	string a,b;
	cin >> a >> b;
	int dp[n+1][m+1] = {0};
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(i==0 and j==0)
			dp[i][j] = 0;
			else if(i==0)
			{
				if(j==1)
				dp[i][j] = 1;
				else if(a[j-2] == a[j-1])
				dp[i][j] = dp[i][j-1];
				else
				dp[i][j] = dp[i][j-1] + 1;
			}
			else if(j==0)
			{
				if(i==1)
				dp[i][j] = 1;
				else if(b[i-1] == b[i-2])
				dp[i][j] = dp[i-1][j];
				else
				dp[i][j] = dp[i-1][j] + 1;
			}
			else
			{
				if(a[j-1] == a[j-2])
				dp[i][j] = dp[i][j-1];
				else if(b[i-1] == b[i-2])
				dp[i][j] = dp[i-1][j];
				else if(a[j-1] == b[i-1])
				dp[i][j] = dp[i-1][j-1]+1;
				else
				dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + 1;
			}
		}
	}
	/*for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		cout << dp[i][j] << " ";
		cout << endl;
	}*/
	cout << dp[n][m] << endl; 
}
 
return 0;
}