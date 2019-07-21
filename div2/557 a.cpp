
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
    int h,n,m;
    cin>>n>>h>>m;
    int arr[1000];
    int maxx=h;
  for(int p=0;p<100;p++)
    arr[p]=maxx;
  //  cout<<arr[0]<<endl;
    int lft,ri,mx;
    for(int i=1;i<=m;i++)
    {
        cin>>lft>>ri>>mx;
        for(int j=lft;j<=ri;j++)
        {
            if(arr[j]>mx)
                arr[j]=mx;
        }

    }
 int ans=0;

    for(int i=1;i<=n;i++)
    {
       // cout<<arr[i]<<endl;
        ans += (arr[i]) * arr[i];
       // cout<<ans<<endl;

    }
    cout<<ans<<endl;
}
