#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v[1000000],v2[1000000];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   ll  n,k,i;

   cin>>n>>k;

    for(  i=0; i<n; i++)
    {
       cin >> v[i];
    }
    if(n==1)
    {
       cout<< "0" <<endl;
        return 0;
    }
  // ll v2[n-1];
    for(  i=0; i<n-1; i++)
    {
        v2[i]=v[i]-v[i+1];
    }
    sort(v2,v2+n-1);
    ll ans =v[n-1]-v[0];
    for( i=0; i<k-1; i++)
        ans+=v2[i];
    cout<< ans <<endl;
}

