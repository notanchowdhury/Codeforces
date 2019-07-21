
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
int ar[300009],se[300009];
int cnt;
int n,a,b,x,y,i,j,m;
//string r_str = R"(Hello\tWorld\n)";
int solve(int p,int q)
{
    cnt=0;
    for(int l=1; l<=m; l++)
    {
        if(ar[l]==p ||ar[l]==q||se[l]==p||se[l]==q)
            cnt++;
    }
    if(cnt==m)
    {

        return 0;
    }
    else
        return 1;
}
int main()
{
    IOS

    cin>>n>>m;
    set<int>st;
    for(i=1; i<=m; i++)
    {
        int akas,batash;
        cin>>akas>>batash;

        if(akas>=batash)
        {
            se[i]=akas;
            ar[i]=batash;
            if(st.size()<9)
            {
                if(st.count(akas)||st.count(batash))
                {

                }
                else
                {
                    st.insert(akas);
                    st.insert(batash);
                }
            }
        }
        else
        {
            se[i]=batash;
            ar[i]=akas;
            if(st.size()<9)
            {
                if(st.count(akas)||st.count(batash))
                {

                }
                else
                {
                    st.insert(akas);
                    st.insert(batash);
                }
            }
        }



    }
    int ans[29];
    set<int>::iterator it;
    int ind=0;
    if(st.size()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        int tmp=(*it);
        ans[ind++]=tmp;
    }
    for(int r=0; r<ind-1; r++)
    {
        for(int g=r+1; g<ind; g++)
        {
            int slv= solve(ans[r],ans[g]);
            if(slv==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;

}

