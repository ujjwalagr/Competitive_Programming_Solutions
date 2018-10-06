/*
 *
 ********************************************************************************************
 * AUTHOR : blazedxi                                                             *
 * Language: C++14                                                               *
 * IDE used: CodeBlocks                                                          *
 ********************************************************************************************
 *
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// typedef long long L;
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define sz(a) (L)((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define trvect(c,i) for(vector<ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define rep(i,n) for(L i=0;i<n;i++)
#define rep1(i,t,n) for(L i=t;i<n;i++)
#define MOD 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll t;
cin >> t;
while(t--)
{
	priority_queue<ll> motu;
	priority_queue<ll, vector<ll>, greater<ll> > tomu;
	ll sum=0, sum1=0;
	ll n, k;
	cin >> n >> k;
	for(ll i=0; i<n; i++)
	{
		ll x;
		cin >> x;
		if(i%2) tomu.push(x), sum1+=x;
		else motu.push(x), sum+=x;
	}
 	for(ll i=0; i<k; i++)
	{
		ll x = tomu.top();
		ll y = motu.top();
		sum1 = sum1 - x + y;
		sum = sum - y + x;
		tomu.pop(), motu.pop();
		tomu.push(y), motu.push(x);
		if(sum < sum1)
		break;
	}
	cout << (sum < sum1 ? "YES":"NO") << endl;
}
 
return 0;
}