
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
int arr[1000005],arr2[100005];
int main()
{
    IOS
    long long n,m,p;

    cin>>n>>m;

    //set<int> myset;
    vector<int>v[100005];
    int mx=0;
    for(int i=1; i<=m; i++)
    {
        cin>>arr[i];
        v[arr[i]].push_back(i);
        arr2[i]=-1;
    }
    int mini=1000000;
    for(int i=1;i<=n;i++)
    {
        if(mini>v[i].size())
            mini=v[i].size();
    }
    for(int i=0;i<mini;i++)
    {
        int mx=0;
        for(int j=1;j<=n;j++)
        {
            if(v[j][i]>mx)
                mx=v[j][i];
        }
        arr2[mx]=1;
    }
    for(int i=1;i<=m;i++)
    {
        if(arr2[i]==-1)
            cout<<"0";
        else
            cout<<arr2[i];
    }
    cout<<endl;

}
