#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int a,b,c,d,cnt=0,arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>d;
    sort(arr,arr+3);
   // cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    arr[1]=arr[1]+d;
    if(arr[2]<arr[1])
        cnt+=(arr[1]-arr[2]);
    arr[1]-=d;
    arr[1]-=d;
    if(arr[0]>arr[1])
        cnt+=(arr[0]-arr[1]);

    cout<<cnt<<endl;
}

