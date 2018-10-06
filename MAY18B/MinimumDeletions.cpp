/*
 *
 ********************************************************************************************
 * AUTHOR : blazedxi                                                             *
 * Language: C++14                                                               *
 * IDE used: CodeBlocks                                                          *
 ********************************************************************************************
 *
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long L;
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
fast;
L t;
cin>>t;
while(t--)
{
L n;
L g=0,gp=0;
cin>>n;
L a[n];
    rep(i,n)
        cin>>a[i];
        g=a[0];
    rep1(i,1,n)
        g=__gcd(g,a[i]);
    if(g==1)
        cout<<"0"<<endl;
    else
        cout<<"-1"<<endl;
}
return 0;
}


/*int start_s=clock();
	// the code you wish to time goes here
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
/*/