
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
    int n,a,b,x,y,i,j;
    cin>>n>>a>>x>>b>>y;
    bool sh=false;
    for( i=a,j=b;;i++,j--)
    {
        if(i==j)
        {
            sh=true;
            break;
        }

      if(i==x||j==y)
            break;
     //   cout<<i<<" "<<j<<" "<<x<<" "<<y<<endl;
        if(i==n)
            i=0;
        if(j==1)
            j=n+1;





    }
    if(sh)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

