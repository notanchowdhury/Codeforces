#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
#define mod 998244353
char aa[1000000];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>aa[i];
    if(mp[aa[i]-'0']=0)
        mp[aa[i]-'0']=1;
    else
        mp[aa[i]-'0']++;
    }
    if(mp[0]==mp[1] && mp[1]==mp[2])
       {
           for(int i=1;i<=n;i++)
        {
            cout<<aa[i];
        }
        cout<<endl;
        return 0;
       }
    int temp=n/3;
    int ze=temp-mp[0];
    int one=temp-mp[1];
    int two=temp-mp[2];
    int takezero=0,givezero=0,levelzero=1,giv1=0,giv2=0,level1=1,take1=0,take2=0,level2=1;
    if(zero<temp)
        takezero=temp-zero;
    if(zero>temp)
        givezero=zero-temp;
    if(zero==temp)
        levelzero=0;
    if(one<temp)
        take1=temp-one;
    if(one>temp)
        giv1=one-temp;
    if(one==temp)
        level1=0;

         if(two<temp)
        take2=temp-two;
    if(two>temp)
        giv2=two-temp;
    if(two==temp)
        level2=0;
    for(i=takezero;i>=1;i--)
    {
        if(aa[i]=='')
    }
    for(int i=n;i>=1;i--)
    {

    }
    }
}
