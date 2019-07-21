
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    int w,h;
    int u1,d1;
    int u2,d2;
    cin>>w>>h;
    cin>>u1>>d1;
    cin>>u2>>d2;
    for(int i=h;i>0;i--)
    {
        w+=i;
        if(d1==i)
        {
            w=max(0,(w-u1));
        }
        if(d2==i)
        {
            w=max(0,(w-u2));
        }
    }
    cout<<w<<endl;
}

