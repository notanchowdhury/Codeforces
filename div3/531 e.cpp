#include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=1e6;const long mod=998244353;
int aa[N+2];
map<int,int>mp;
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n;cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>aa[i];mp[aa[i]]=i;
  }
  int last=0,cnt=0;
  for(int i=1;i<=n;i++)
  {
    last=mp[aa[i]];
   // cout<<last<<endl;
    for(int j=i;j<=last;j++)
      last=max(last,mp[aa[j]]);
    i=last;cnt++;
   // cout<<last<<" "<<i<<" "<<cnt<<endl;
  }
  long ans=1;
  for(int i=1;i<cnt;i++)
    ans=(ans*2LL)%mod;
  cout<<ans<<endl;
  return 0;
}
