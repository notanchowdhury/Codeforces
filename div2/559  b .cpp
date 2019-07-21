

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a, b)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
#define ll long
int main()
{
    IOS
   ll int h,n,m;
    cin>>n;


   ll int minn=1000000009;
    for(ll int i=0; i<n; i++)
    {
        cin>>h;
       minn=min(minn,h/max(i,n-i-1));
    }
  cout<<minn<<endl;
}
