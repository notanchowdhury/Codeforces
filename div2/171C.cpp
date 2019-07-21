#include<bits/stdc++.h>
using namespace std;
int arr[100004],jump[100004];

int main()
{
    int n,m,l,r;
    scanf("%d %d ",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);


    jump[n]=10000000;

    int imbalance=10000000;
    for(int i=n-1; i>=1; i--)
    {
        if(arr[i]<arr[i+1] && arr[i]<arr[i-1])
        {
            jump[i]=imbalance;
            imbalance=i;
            continue;

        }
        if(arr[i]==arr[i-1] && arr[i]<arr[i+1])
        {
            int tmp=i;
            while(arr[i]==arr[i-1])
            {
                jump[i]=imbalance;
                i--;
            }
            if(arr[i]<arr[i-1])
            {
                jump[i]=imbalance;
                imbalance=tmp;
                continue;
            }
        }
        jump[i]=imbalance;
    }
    jump[1]=imbalance;
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d",&l,&r);
        if(jump[l]>=r)
            printf("Yes\n");
        else printf("No\n");
    }
}
