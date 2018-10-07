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
	vector<int> temp;
	int a;
	for(int i=0; i<4; i++)
	{
		cin >> a;
		temp.push_back(a);
	}
	sort(temp.begin(), temp.end());
	cout << (temp[0]==temp[1] && temp[2]==temp[3] ? "YES":"NO") << endl;
}

return 0;
}
