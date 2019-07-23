
#include<bits/stdc++.h>
using namespace std;
int arr[200001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin>>n;
    int mx=0,ind;
    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
        if(arr[j]>mx)
        {
            ind=j;
            mx=arr[j];
        }
    }
    int lft=1,rt=1,cnt=1;
    int tmp=mx;
    while(cnt<n)
    {
     //   cout<<cnt<<endl;
        if(ind-lft<0)
        {
         //   cout<<"l"<<endl;
            if(arr[ind+rt]==tmp-1)
            {
                cnt++;tmp--;rt++;
            }
            else
                break;
        }
        else if(ind+rt>n-1)
        {
            //  cout<<"0l"<<endl;
            if(arr[ind-lft]==tmp-1)
            {
                cnt++;tmp--;lft++;

            }
            else break;
        }
        else{

            if(arr[ind+rt]==tmp-1)
            {
                // cout<<"vl"<<endl;
                cnt++;tmp--;rt++;
            }
          else  if(arr[ind-lft]==tmp-1)
            {
               //  cout<<"wl"<<endl;
                cnt++;tmp--;lft++;
            }
            else
                break;
        }
    }

    if(cnt==n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


}
