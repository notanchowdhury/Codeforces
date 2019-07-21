
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
//string r_str = R"(Hello\tWorld\n)";

int main()
{
    IOS
  ll int n,a,b;
   cin>>n;

      for(int i=1;i<=n;i++)
    {
      ll int p,ans=0,lo;
       cin>>p>>a>>b;
       if(a*2<=b)
       {
           ans=p*a;
       }
      else{
            if(p%2==0)
            {
                ans=(p/2)*b;
            }
            else
            {
                ans=(p/2)*b;
                ans+=a;
            }
      }

      cout<<ans<<endl;
    }

}

