

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;




int main()
{
    IOS
    int n,d=1,ans=0;
    int arr[200009];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=d)
        {ans++;d++;}
    }
    cout<<ans<<endl;

}

