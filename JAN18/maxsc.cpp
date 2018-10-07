#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
ll t;
cin >> t;
while(t--)
{
	ll n;
	cin >> n;
	ll a[n][n];
	ll i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		cin >> a[i][j];
		sort(a[i], a[i]+n);
	}
	ll res = a[n-1][n-1];
	ll prev = a[n-1][n-1];
	for(i=n-2; i>=0; i--)
	{
		for(j=n-1; j>=0; j--)
		{
			if(a[i][j] < prev)
			{
				prev = a[i][j];
				res += prev;
				break;
			}
		}
		if(j == -1)
		break;
	}
	cout << (i==-1 ? res:-1) << endl;
}
return 0;
}
