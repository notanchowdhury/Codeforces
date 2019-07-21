#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))

using namespace std;
int arr[200003];
 long long n,k;
vector<int> cur;
bool func(int v)
{
    int cnt=0;
    for(int i=1;i<=200000;i++)
    {
        int temp=arr[i]/v;

        while(temp--)
        {
         //   cout<<i<<"+"<<v<<endl;
            cur.push_back(i);
            cnt++;
         //   cout<<"cnt "<<cnt<<endl;
            if(cnt==k)
               return true;
        }


    }
    return false;
}
int main()
{
    IOS

    cin>>n>>k;
   vector<int>vec;
    for(long long i=0;i<n;i++)
    {
        int s;
        cin>>s;
         arr[s]++;
    }
  int lo=0,hi=200000;
  for(int i=1;i<=35;i++)
  {
      int mid=(lo+hi)/2;

      if(func(mid))
      {
          vec=cur;
          lo=mid;

      }
      else
      {
          hi=mid;
      }
      cur.clear();
  //    cout<<lo<<" "<<hi<<endl;
  }
  for(int p=lo;p<=hi;p++)
  {
      if(func(p))
      {
          vec=cur;
          cur.clear();
      }
      else
        break;
  }
  for(int i=0;i<k;i++)
      cout<<vec[i]<<" ";
}
