#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lim 600005
#define fin freopen("in.txt","r",stdin);
#define fout freopen("out.txt","w",stdout);

int n,m;
int par[lim+10];
int sz[lim+10];
set<int>st;
int a[300000],b[300000];
int find_par(int n)
{
    if(par[n]==n)
    {

        st.insert(n);
        return n;
    }
    else return par[n]=find_par(par[n]);
}

void _union(int a,int b)
{
    int x=find_par(a);
    int y=find_par(b);
    if(x!=y)
    {
        par[y]=x;
        sz[x]+=sz[y];
    }
}


int main()
{

    for(int i=0; i<lim; i++)
    {
        par[i]=i;
        sz[i]=1;
    }
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<m; i++)
    {
        _union(a[i],b[i]);
    }
    for(int i=1; i<n; i++)
        find_par(i);
    if(st.size()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(st.size()==2)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}
