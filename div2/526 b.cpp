#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int arr[10000],n,s,sum=0,mn=1000000000;
    scanf("%lld %lld",&n,&s);
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
        mn=min(mn,arr[i]);
    }
    if(sum<s)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ll int low=0,high=mn,mid,mx=0,ans=0;
    for(int p=1;p<=150;p++)
    {
        mid=(low+high)/2;
        //cout<<mid<<endl;
        ans=0;
        for(int j=1; j<=n; j++)
        {
            if(arr[j]>mid)
                ans+=(arr[j]-mid);
        }
       // cout<<ans<<" "<<mid<<" "<<low<<" "<<high<<endl;
        if(ans==s)
        {
            cout<<mid<<endl;
            return 0;
        }
        if(ans>s)
        {
            low=mid+1;
            if(mid>=mx)
                mx=mid;
        }
        else
            high=mid-1;

    }
    cout<<mx<<endl;
    // cout<<ans<<endl;
}

