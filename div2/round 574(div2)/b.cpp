#include<bits/stdc++.h>
using namespace std;
int main()
{
 /// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int n,k,mid=0;
    scanf("%lld %lld",&n,&k);
    for(long long int i=1;i<=n;i++)
    {
        mid = ((i*i)+i)/2;
        if(mid-k ==(n-i))
        {
            printf("%lld\n",n-i);
            return 0;
        }
    }
}
