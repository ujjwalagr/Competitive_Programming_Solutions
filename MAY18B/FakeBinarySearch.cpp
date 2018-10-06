
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
#define repa(i,t,n) for(auto i=t;i!=n;i++)
#define pb push_back
#define svect(v) sort(v.begin(),v.end());
#define in(a) cin>>a
#define in2(a,b) cin>>a>>b;
#define out(a) cout<<a<<endl
#define all(c) (c).begin(),(c).end()
#define trvect(c,i) for(vector<ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define rep(i,n) for(L i=0;i<n;i++)
#define rep1(i,t,n) for(L i=t;i<n;i++)
#define MOD 1000000007
void callme(L i,L y, vector<L> &vect)
{
    L l=1,h=i+1,m;
    while(l<=h)
    {
    m=(l+h)/2;
    vect.pb(m-1);
    if(m==y+1) break;
    else if(m<y+1) l=m+1;
    else h=m-1;
    }
}

int main()
{
fast;
L t;
cin>>t;
while(t--)
{
        L n,q;
        in2(n,q);
        L marr[n],sarr[n];
        map<L,L> em;
        rep(i,n)
            in(marr[i]),sarr[i]=marr[i],em.insert(pair<L,L>(marr[i],i));
        sort(sarr,sarr+n);
        while(q--)
        {
            L sg=0,sl=0,il=0,ig=0,element;
            in(element);
            L idx=em[element];
            vector <L> match;
            callme(n-1,idx,match);
            svect(match);
            L sz=match.size();
            repa(i,match.begin(),match.end())
            {
                if(*i>idx && marr[*i]<element) sg++;
                else if(*i>idx && marr[*i]>element) ig++;
                else if(*i<idx && marr[*i]<element) il++;
                else if(*i<idx && marr[*i]>element) sl++;
            }
            L lr=0,sm=0;
            L tidx=upper_bound(sarr,sarr+n,element)-sarr;
            lr=n-tidx;
            sm=tidx-1;
            lr-=ig;
            sm-=il;
            if(sg<=lr&& sl<=sm)
               out(sg+sl-min(sg,sl));
            else
            out(-1);
        }
}
return 0;
}


/*int start_s=clock();
	// the code you wish to time goes here
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
/*/
