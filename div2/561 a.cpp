


#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
  int lft[29],ri[29];

int main()
{
    IOS
    int t;
  string s;
  cin>>t;

    int m,n,ans=0,k;
    while(t--)
    {
        cin>>s;
        if(lft[s[0]-'a']>ri[s[0]-'a'])
       {
           ans+=ri[s[0]-'a'];
           ri[s[0]-'a']++;
       }
      else
      {

          ans+=lft[s[0]-'a'];
            lft[s[0]-'a']++;
      }


    }
     cout<<ans<<endl;
}






