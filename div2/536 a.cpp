
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
    char arr[502][502];
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>arr[i][j];
    for(int i=2; i<n; i++)
        for(int j=2; j<n; j++)
           {
               if(arr[i][j]=='X' && arr[i-1][j-1]=='X' && arr[i+1][j-1]=='X' && arr[i-1][j+1]=='X' && arr[i+1][j+1]=='X')
                cnt++;
           }
           cout<<cnt<<endl;
}

