
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a, b)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define l long long
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
vector<long long int> v;
int ar[1000003];
//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    long long  int n,cnt=0,ll;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>ll;
        //v[i]=ll;
        ar[i]=ll;
    }
    sort(ar,ar+n);
  // sort(v.begin(),v.end());
  //  for(int i=0; i<n; i++)
   // {
      //  cout<<ar[i]<<" ";
   // }
    for(int i=0; i<n/2; i++)
    {
          long long int tmp=ar[i]+ar[n-i-1];
        //  cout<<tmp<<" ";
          cnt= cnt +(tmp*tmp);
    }
    cout<<cnt<<endl;
}

