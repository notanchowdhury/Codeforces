
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;




int main()
{
    IOS
    int x,n,y,ans=0;
    cin>>n;
    string str;

      cin>>str;
      for(int i=0;i<n;)
      {
          if(str[i]==str[i+1])
          {
              str[i]='+';
              i++;
              ans++;
          }
          else
            i+=2;
      }


if((n-ans)%2!=0)
    {str[n-1]='+';ans++;}

    cout<<ans<<endl;
    for(int i=0;i<n;i++)
        if(str[i]!='+')
        cout<<str[i];
}

