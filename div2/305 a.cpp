
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
    int k,n,ans=0;

    string s;
    bool popp=false;
    cin>>s;
cin>>k;
   stack<char>st;

  int init=0,i;

  int cnt=0;

  n=(int)s.size();
  int tot=n/k;
  int skip=tot/2;
  if(n%k!=0)
  {
      cout<<"NO"<<endl;
      return 0;
  }

  for( i=0;i<n;i++)
  {

      cnt++;
      if(tot%2!=0)
      {

          if(i==(init+skip))
          {
             if(skip==0)
                ans++;
             init=init+tot;
              // cout<<i<<" "<<(init+skip)<<" dhuks"<<endl;
               continue;
          }
           // continue;
      }
      if(st.empty())
        st.push(s[i]);
      else if(st.top()==s[i])
        st.pop();
        else{
            st.push(s[i]);
        }


        if(cnt==tot)
      {
          if(st.empty())
            {ans++;
        //    cout<<ans<<endl;
            }
          else{
            while(!st.empty())
                st.pop();
          }

          cnt=0;
      }
      }
     // cout<<ans<<endl;
    if(ans==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

