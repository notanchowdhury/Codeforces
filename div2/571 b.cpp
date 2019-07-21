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
    ll int p,n,k,tmp,nn,kk;
    cin>>n>>k;

    if(n==1)
    {
        p=(k+1/3);
        cout<<p<<endl;
    }
    else if(k==1)
    {
        p=(n+1/3);
        cout<<p<<endl;
    }
 else if(n==k)
        cout<<n-1<<endl;

        else{

           tmp=n*k;
           ll ans=sqrt(tmp);
           ll shala=ans;
           while(ans*shala<tmp)
            shala++;
           cout<<shala<<endl;


        }
 }
    //else cout<<"No"<<endl;


