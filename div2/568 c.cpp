#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    int arr[1000],ans[109],cum[109],sec[100];
    cin>>n>>m;
   // vector<int>v;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   // sort(arr,arr+n);
    cum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        cum[i]=arr[i]+cum[i-1];
    }

     for(int i=0;i<n;i++)
    {
        cnt=0;
            if(cum[i]<=m)
                ans[i]=0;
            else
            {
               int ind =0;
                for(int j=0;j<=i-1;j++)
                {

                sec[ind++]=arr[j];
                //cout<<sec[ind-1]<<" ";
                }
               // cout<<endl;
                sort(sec,sec+i);
                int sum=cum[i],cnt=0;
                for(int j=ind-1;j>=0;j--)
                {
                    sum-=sec[j];
                    cnt++;
                    if(sum<=m)
                        {ans[i]=cnt;break;}
                }
            }
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";



   // cout<<cnt<<endl;
}

