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
string sstr;
multiset<int>ans;
priority_queue<int>pq;
map<ll,bool>mm;
int n,k;
i64 Hash(string &s,int m){
    i64 h = 0 , power = 1;
    i64 B = 347, M = 1000000000+7;
    for(int i = m-1;i>=0;i--){
        h = h + (s[i] * power) % M;
        h = h % M;
        power = (power * B)%M;
    }
    return h;
}
//void solve(string str,int si)
//{
//    ll hh=Hash(str,si);
//    if(mm[hh]) return ;
//    if(pq.size()>=k && n-si>pq.top()) return ;
//    else
//    {
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
void solve(string str,int si)
{
    queue<string>vv;
    ll hush=Hash(str,si);
    vv.push(str);
    while(!vv.empty() && ans.size()<k)
    {

        string u=vv.front();//cout<<"u: "<<u<<endl;
        vv.pop();
        int sz=u.size();
        hush=Hash(u,sz);
        if(mm[hush]) continue;
        mm[hush]=1;
        ans.insert(n-sz);
        //if(sz==1) continue;
        for(int i=0;i<sz;i++)
        {
            string tm;
            for(int j=0;j<sz;j++){if(j!=i) tm+=u[j];}
            vv.push(tm);
        }

    }

}
int main()
{
    FastIO;
    cin>>n>>k;
    string str;
    cin>>sstr;
    solve(sstr,n);
    int cnt=0,ss=0;
    for(auto it=ans.begin();it!=ans.end() && cnt<k;it++,cnt++)
    {
        ss+=*it;
    }
    if(cnt>=k) cout<<ss<<endl;
    else cout<<-1<<endl;
}
