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
	int n,m;
	cin >> n >> m;
	set<pair<int, int> > s;
	for(int i=0; i<n; i++)
	{
		int l, r;
		cin >> l >> r;
		s.insert(mp(l,r));
	}
	while(m--)
	{
		int k;
		cin >> k;
		set<pair<int, int> > :: iterator it = s.lower_bound(mp(k,0));
		if(it == s.end())
		{
			it--;
			if(it->se > k) cout << 0 << endl;
			else cout << -1 << endl;
		}
		else
		{
			if(it != s.begin()) 
			{
				it--;
				if(it->se > k) cout << 0 << endl;
				else
				{
					it++;
					cout << it->fi - k << endl;
				}
			}
			else cout << it->fi - k << endl;
		}
	}
}

return 0;
}
