
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

ll mod = 1e9+7;
const double error = 1e-7;
const double PI = acos(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

#define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
#define hoise cerr<<"hoise\n"
#define tham getchar()
mt19937 rng((unsigned int) chrono::system_clock::now().time_since_epoch().count());

inline ll MOD(ll x, ll m = mod)
{
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ull infl = 1e18+1;
const int nmax = 2e5+5;
///====================== template =========================
ll n, k,ar[3][100005],dp[3][100005];
ll  fun(int state,int ind)
{
    if(ind>n)
        return 0;
  if(dp[state][ind]!=0)
    return dp[state][ind];
    ll ans1=0,ans2=0,ans3=0;
    if(state==1)
    {
        ans1=ar[0][ind]+fun(0,ind+1);
        ans2=fun(2,ind+1);
    }
    if(state==0)
    {
        ans1=ar[1][ind]+fun(1,ind+1);
        ans2=fun(2,ind+1);
    }
    if(state==2)
    {
         ans1=ar[0][ind]+fun(0,ind+1);
        ans2=ar[1][ind]+fun(1,ind+1);
    }
    return dp[state][ind]=max(ans1,ans2);
}
int main()
{
    FASTIO;

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>ar[0][i];

    for(int i=1; i<=n; i++)
        cin>>ar[1][i];

cout<<fun(2,1)<<endl;
}
