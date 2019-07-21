
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
//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    string s;
    int z=0,one=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            z++;
            if(z%2==1)
                cout<<"1 1"<<endl;
            else
                cout<<"3 1"<<endl;

        }
        else
        {
       one++;
                if(one%4==0)
                    cout<<"4 2"<<endl;
                else
                cout<<(one%4)<<" 2"<<endl;


        }

    }
}

