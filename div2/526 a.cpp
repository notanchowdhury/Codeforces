#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[1000];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=0;
    for(int i=1;i<=t;i++)
    {
        int temp=i-1;
        temp*=(2*2);
        temp*=arr[i];
        ans+=temp;
    }
    cout<<ans<<endl;
}
