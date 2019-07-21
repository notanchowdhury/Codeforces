
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
    int n,a,b;
    cin>>n;
    int arr[n+5],lft=0,ri=0,cnt=0;
    int keepl[n+5],keepr[n+5],revkeepl[n+5],revkeepr[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        arr[i]=a;
        if(i%2==0)
        {
            ri+=arr[i];
        }
        else
        {
            lft+=arr[i];
        }
        keepl[i]=lft;
        keepr[i]=ri;

    }
    ri=0;
    lft=0;
    for(int i=n; i>=1; i--)
    {
        int tmp=arr[i];

        if(i%2==0)
        {
            ri+=arr[i];
        }
        else
        {
            lft+=arr[i];
        }
        revkeepl[i]=lft;
        revkeepr[i]=ri;

    }

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            int asol=0,nokol=0;
           asol=keepr[i]-arr[i];
           nokol=keepl[i];
           nokol+=(revkeepr[i]-arr[i]);
           asol+=revkeepl[i];
           if(asol==nokol)
            cnt++;

        }
        else
        {
             int asol=0,nokol=0;
           asol=keepl[i]-arr[i];
           nokol=keepr[i];
           nokol+=(revkeepl[i]-arr[i]);
           asol+=revkeepr[i];
           if(asol==nokol)
            cnt++;
        }

    }
    cout<<cnt<<endl;


}

