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
ll int arr[1000000];
ll int vis[1000000];
//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    ll int n,k,m,sum=0,tmp;
    cin>>n>>m>>k;
    priority_queue<ll int>pq;
    priority_queue<ll int>second;
    queue<ll int >ans;
    for(int i=1; i<=n; i++)
    {
        ll int var;
        cin>>var;
        arr[i]=var;
        pq.push(var);
        //  v.push_back()
    }
    ll int lk;

        for(int i=1; i<=m*k; i++)
        {
            tmp=pq.top();
            lk=0
            // cout<<tmp<<" ";
            for(int j=1; j<=n; j++)
            {
                if(arr[j]==tmp && vis[j] !=1 )
                {
                    ll++;
                       sum+=tmp;
                    if(lk==m)
                    {ans.push(i);
                    vis[j]=1;
                    pq.pop();
      // second.push(i);

                    break;
                    }
                }
            }
        }

    cout<<sum<<endl;
    while(ans.size()>1)
    {
        ll aha=ans.front();
        cout<<aha<<" ";
        ans.pop();
    }




}
