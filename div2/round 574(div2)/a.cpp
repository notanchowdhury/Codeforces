#include <bits/stdc++.h>
using namespace std;
int arr[1001],cnt[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
   // sort(cnt,cnt+k);
    int tot=(n+1)/2,ans=0;
    for(int j=k; j>=1; j--)
    {
        if(tot<1)
            break;
        if(cnt[j]>=2)
        {
            int tmp=(cnt[j]/2);
            //ans+= tmp*2;
            cnt[j]%=2;
            //tot-=tmp;
            for(int p=1;p<=tmp;p++)
            {
                if(tot<1)
                    break;
                ans+=2;
                tot-=1;
            }
        }

    }
    for(int j=k; j>=1; j--)
    {
        if(tot<1)
            break;
        if(cnt[j]>=1)
        {
            ans+=1;
            cnt[j]--;
            tot--;
        }

    }
    cout<<ans<<endl;

}

