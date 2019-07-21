


#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;




int main()
{
    IOS
   ll int n,d=1,ans=0;
    int arr[200009];
   vector<int>v;
    ll int mod=998244353;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int tmp;

        cin>>tmp;
        v.push_back(tmp);
    }

sort(v.rbegin(),v.rend());
 for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    ll int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=(sum+((arr[i]*v[n-i-1])%mod))%mod;
    }

    cout<<sum<<endl;

}


