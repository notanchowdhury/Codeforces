
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
vector<int> v[10000001];
l int ar[100005],c[100005];
//string r_str = R"(Hello\tWorld\n)";
priority_queue <int, vector<int>, greater<int> > pq;
int main()
{
    IOS
    long long  int n,m,cnt=0,ll,ty,tot,itr,ptop,jholok=0;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>ll;ar[i]=ll;

        //cout<<i<<endl;

    }
   // cout<<v[2][0]<<" "<<v[2][1];
    for(int i=1; i<=n; i++)
    {
        cin>>ll; c[i]=ll;
         v[ll].push_back(i);
        pq.push(ll);
    }
    for(int i=1;i<=m;i++)
    {
  bool shala =false;
        cin>>ty>>tot;
         // cout<<ty<<" JHSD"<<tot<<" "<<cnt<<endl;
        if(jholok==n)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(ar[ty]>=tot)
        {
            cnt+=(tot*c[ty]);
            ar[ty]-=tot;
            if(ar[ty]==0)
                jholok++;
           // cout<<cnt<<" "<<ar[ty]<<endl;
        }
        else{
            cnt+=(ar[ty]*c[ty]); itr=(tot-ar[ty]);
            if(ar[ty]!=0)
            jholok++;

             ar[ty]=0;
             //cout<<cnt<<" "<<ar[ty]<<" "<<itr<<endl;
            while(itr)
            {
                if(jholok==n)
                {
                    cout<<"0"<<endl;shala=true;
                    break;
                }
                ptop=pq.top();
                l legpiece=itr;
                if(pq.empty() && itr !=0)
                {
                    cnt=0;
                    break;
                }
               // bool flag=false;
                for(int qloop=0;qloop<v[ptop].size();qloop++)
                {
                    if(itr==0)
                        break;
                    if(ar[v[ptop][qloop]]==0)
                        continue;
                  //  cout<<ar[v[ptop][qloop]]<<" khaisee"<<qloop<<endl;
                    if(ar[v[ptop][qloop]]>=itr)
                       {
                           cnt+=(itr*c[v[ptop][qloop]]);
                           ar[v[ptop][qloop]]-=itr;
                          //  cout<<cnt<<" tar"<<v[ptop][qloop]<<" "<<ptop<<endl;
                           itr=0;
                           if(ar[v[ptop][qloop]]==0)
                            jholok++;

                           break;

                       }
                       else
                        {
                            cnt+=(ar[v[ptop][qloop]]*c[v[ptop][qloop]]); itr=(itr-ar[v[ptop][qloop]]);
                            if(ar[v[ptop][qloop]]!=0)
                                jholok++;

                            ar[v[ptop][qloop]]=0;
                           // cout<<cnt<<" "<<v[ptop][qloop]<<endl;

                        }
                }
                if(itr>0)
                    pq.pop();
               // if(legpiece==itr)
                 //    pq.pop();

            }

        }
        if(!shala)
        cout<<cnt<<endl;
              cnt=0;
    }

}

