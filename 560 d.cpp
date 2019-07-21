


#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;




int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,d=1,ans=0;
        ll int arr[309];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2!=0)
        {
            ll int mid=arr[n/2];
            ll int prb=mid*mid;
            bool flg=true;
            for(int i=0; i<=(n/2); i++)
            {
                if(arr[i]*arr[n-i-1]!=prb)
                    flg=false;
            }
            if(!flg)
                cout<<"-1"<<endl;
            else
                cout<<prb<<endl;
        }
        else
        {
            ll int prb=arr[(n/2)-1]* arr[(n/2)];
            bool flg=true;

            for(int i=0; i<(n/2); i++)
            {
                if(arr[i]*arr[n-i-1]!=prb)
                    flg=false;
            }
            if(!flg)
                cout<<"-1"<<endl;
            else
                cout<<prb<<endl;
        }
    }

}

