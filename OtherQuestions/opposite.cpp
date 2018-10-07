#include <bits/stdc++.h>
#define MAX 100005
#define pb push_back
#define mp make_pair
#define M 1000000007
#define fi first
#define se second
#define inp(i, n, a) for(int i=0;i<n;i++) cin>>a[i];
#define int long long
using namespace std;

signed main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

int t;
cin >> t;
while(t--)
{
	int n;
	cin >> n;
	int a[n];
	inp(i,n,a);
	if(n%2)
	{
		cout << "NO\n";
		continue;
	}
	bool flag = 1;
	for(int i=0; i<n/2 and flag; i++)
	{
		if(a[i] == -1 and a[i+n/2] == -1)
		a[i] = a[i+n/2] = 1;
		else if(a[i] == -1 and a[i+n/2] != -1)
		a[i] = a[i+n/2];
		else if(a[i] != -1 and a[i+n/2] == -1)
		a[i+n/2] = a[i];
		else if(a[i] != a[i+n/2])
		flag = 0;
	}
	if(!flag)
	{
		cout << "NO\n";
		continue;
	}
	cout << "YES\n";
	for(int i=0; i<n; i++)
	cout << a[i] << " ";
	cout << endl;
}

return 0;
}
