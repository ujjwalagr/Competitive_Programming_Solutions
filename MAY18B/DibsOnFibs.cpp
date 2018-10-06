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
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define sz(a) (L)((a).size())
#define pb push_back
#define in(a) cin>>a
#define out(a) cout<<a<<endl
#define all(c) (c).begin(),(c).end()
#define trvect(c,i) for(vector<ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define rep(i,n) for(L i=0;i<n;i++)
#define rep1(i,t,n) for(L i=t;i<n;i++)
#define M 1000000007
int main()
{
fast;
L t;
cin>>t;
while(t--)
{
	L n,k,sm1=0,sm2=0;
	in(n);
	in(k);
	L a[n],b[n];
	rep(i,n)
        {in(a[i]);
        sm1+=a[i];}
    rep(i,n)
        in(b[i]),sm2+=b[i];
    sm1=sm1%M;
    sm2=sm2%M;
    sm1=(sm1*n)%M;
    sm2=(sm2*n)%M;
    L g[k];
    g[0]=sm1;
    g[1]=sm2;

    rep1(i,2,k)
        {
         g[i] = (g[i-1] + g[i-2])%M;
        }
    out(g[k-1]);

}
return 0;
}


/*int start_s=clock();
	// the code you wish to time goes here
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
/*/
