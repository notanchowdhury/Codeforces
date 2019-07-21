

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
int ar[10000];
//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    int n,first,sec,third,fr,ans[8];
    ar[4]=ar[8]=ar[15]=ar[16]=ar[23]=ar[42]=1;
    printf("? 1 2\n");
    fflush(stdout);
    scanf("%d",&n);
    if(ar[n/4]==1)
    {
        first=4;
        sec=n/4;
    }
    else if(ar[n/8]==1)
    {
        first=8;
        sec=n/8;
    }
    else if(ar[n/15]==1)
    {
        first=15;
        sec=n/15;
    }
    else if(ar[n/16]==1)
    {
        first=16;
        sec=n/16;
    }
    else if(ar[n/23]==1)
    {
        first=23;
        sec=n/23;
    }
    else if(ar[n/42]==1)
    {
        first=42;
        sec=n/42;
    }




    printf("? 1 3\n");
    fflush(stdout);
    scanf("%d",&n);
    if(ar[n/4]==1)
    {
        third=4;
        fr=n/4;
    }
    else if(ar[n/8]==1)
    {
        third=8;
        fr=n/8;
    }
    else if(ar[n/15]==1)
    {
        third=15;
        fr=n/15;
    }
    else if(ar[n/16]==1)
    {
        third=16;
        fr=n/16;
    }
    else if(ar[n/23]==1)
    {
        third=23;
        fr=n/23;
    }
    else if(ar[n/42]==1)
    {
        third=42;
        fr=n/42;
    }
    if(first==third)
    {
        ans[0]=first;
        ans[1]=sec;
        ans[2]=fr;
    }
    else if(first==fr)
    {
        ans[0]=first;
        ans[1]=sec;
        ans[2]=third;
    }

    if(sec==third)
    {
        ans[0]=sec;
        ans[1]=first;
        ans[2]=fr;
    }
    else if(sec==fr)
    {
        ans[0]=sec;
        ans[1]=first;
        ans[2]=third;
    }
    //cout<<first<<" "<<sec<<" "<<third<<" "<<fr<<endl;
///for rest 3


     printf("? 4 5\n");
    fflush(stdout);
    scanf("%d",&n);
    if(ar[n/4]==1)
    {
        first=4;
        sec=n/4;
    }
    else if(ar[n/8]==1)
    {
        first=8;
        sec=n/8;
    }
    else if(ar[n/15]==1)
    {
        first=15;
        sec=n/15;
    }
    else if(ar[n/16]==1)
    {
        first=16;
        sec=n/16;
    }
    else if(ar[n/23]==1)
    {
        first=23;
        sec=n/23;
    }
    else if(ar[n/42]==1)
    {
        first=42;
        sec=n/42;
    }




    printf("? 4 6\n");
    fflush(stdout);
    scanf("%d",&n);
    if(ar[n/4]==1)
    {
        third=4;
        fr=n/4;
    }
    else if(ar[n/8]==1)
    {
        third=8;
        fr=n/8;
    }
    else if(ar[n/15]==1)
    {
        third=15;
        fr=n/15;
    }
    else if(ar[n/16]==1)
    {
        third=16;
        fr=n/16;
    }
    else if(ar[n/23]==1)
    {
        third=23;
        fr=n/23;
    }
    else if(ar[n/42]==1)
    {
        third=42;
        fr=n/42;
    }
    if(first==third)
    {
        ans[3]=first;
        ans[4]=sec;
        ans[5]=fr;
    }
    else if(first==fr)
    {
        ans[3]=first;
        ans[4]=sec;
        ans[5]=third;
    }

    if(sec==third)
    {
        ans[3]=sec;
        ans[4]=first;
        ans[5]=fr;
    }
    else if(sec==fr)
    {
        ans[3]=sec;
        ans[4]=first;
        ans[5]=third;
    }
        //cout<<first<<" "<<sec<<" "<<third<<" "<<fr<<endl;

    printf("! %d %d %d %d %d %d\n",ans[0],ans[1],ans[2],ans[3],ans[4],ans[5]);
    fflush(stdout);
}
