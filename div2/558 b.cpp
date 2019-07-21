
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
    int h,n,m,ans=0;
    vector<int>v;
    vector<int>v2[15];
    set<int>st;
    cin>>n;
    int mxsize=0,prv=0;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    for(int i=1;i<=n;i++)
    {
        st.insert(v[i]);
        v2[v[i]].push_back(i);
        if(st.size()>prv)
        {
            set<int>::iterator it;
            for(it=st.begin();it!=st.end();it++)
            {
                int tmp=(*it);
                if()

            }
        }

    }

}


