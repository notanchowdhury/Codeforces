#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
const int N= 1e6 + 7;
string str[N]; int row[N],col[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0; i<n; i++)
            row[i]=0;
        for(int j=0; j<m; j++)
            col[j]=0;
       for(int i=0;i<n;i++)cin>>str[i];
       for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
       {
           if(str[i][j]=='.')
            row[i]++,col[j]++;
       }
        int mx=1e9+7;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
       {
          int p=row[i]+col[j];
          if(str[i][j]=='.')
            p--;
          mx=min(p,mx);
       }
     cout<<mx<<endl;

    }
}

