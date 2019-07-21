#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a, b)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
int ar[100006];
//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    ll int n,i,ans=0,cnt=0,j;
    string s;
    cin>>s;
    bool shala=false;
   stack<char>st;
   for(i=0;i<s.size();i++)
   {
       if(st.empty())
       {
           st.push(s[i]);
           continue;
       }
       if(st.top()==s[i])
       {
           cnt++;
          // cout<<st.top()<<"S"<<i<<endl;
           st.pop();
       }
       else
        st.push(s[i]);
   }
   //acout<<cnt<<endl;

    if(cnt==0)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(cnt%2!=0)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
