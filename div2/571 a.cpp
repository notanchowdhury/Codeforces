#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define siz         100009
#define inf         1e18+8
#define mp          make_pair
#define rep(i,n)    for(int i=0;i<n;i++)
#define repo(i,m,n) for(int i=m;i<=n;i++)
#define ll          long long
#define pii         pair<int,int >
#define sc(n)       scanf("%d",&n)
#define sc2(m,n)    scanf("%d%d",&m,&n);
#define MOD         4294967296
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)
#define mem(x,i)    memset(x,i,sizeof x)
#define PI          acos(-1.0)
#define ff          first
#define ss          second
#define all(x)      x.begin(),x.end()
/*------------------------------Graph Moves----------------------------*/
//const int fx[]= {+1,-1,+0,+0};
//const int fy[]= {+0,+0,+1,-1};
//const int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};  // Kings Move
//const int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;
typedef long long i64;

//Returns the index of the first match
//Complexity O(n+m), this is unsafe because it doesn't check for collisons

//        mm[hh]=1;
//        ans.insert(n-si);
//        pq.push(n-si);
//        for(int i=0;i<str.size();i++)
//        {
//            string tm;
//            for(int j=0;j<si;j++){if(j!=i) tm+=str[j];}
//            solve(tm,si-1);
//        }
//
//    }
//}

int main()
{
    FastIO;
    int p,n,k;
    cin>>p>>n>>k;
    if(n>=p && k>=p) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

