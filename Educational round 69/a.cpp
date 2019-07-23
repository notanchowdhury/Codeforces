#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
      int arr[100005];
    for(int i=0;i<t;i++)
    {
        int n;

        cin>>n;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);
        int mx1=arr[n-1];
        int mx2=arr[n-2],mx3=-1;
        for(int j=n-3;j>=0;j--)
        {
            if(arr[j]<=mx2)
                {mx3=j;break;}
        }
        int ans=min(mx2-1,mx3+1);
        cout<<ans<<endl;
    }

}
