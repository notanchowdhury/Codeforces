#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t,n;
    vector<string>v;
    int arr[1004];
    int loop;
    int max=0,secmax=0;
    scanf("%d",&t);
    string s,temp,ager,f1,f2;
    f1="";
    f2="";
    for(loop=1;loop<=2*t-2;loop++)
    {
       cin>>s;
        v.push_back(s);

        arr[loop]=s.length();
    }

   // sort(v.begin(),v.end());
    int ans=0,keep=0,keep2=0;
    for(loop=1;loop<=t;loop++)
    {
     if(arr[loop]>max)
     {max=arr[loop];
     keep=loop;
     }
    }
    arr[keep]=-1;
    for(loop=1;loop<=t;loop++)
    {
     if(arr[loop]>secmax)
     {secmax=arr[loop];
     keep2=loop;
     }
    }
    temp=v[keep-1]+v[keep2-1];
    ager=v[keep2-1]+v[keep-1];
int cnt=0;
cout<<temp<<" "<<ager<<endl;
  for(int l=0;l<v.size();l++)
  {
      string ek=v[l];
      cnt=0;
      for(int s=0;s<ek.length();s++)
      {
          if(ek[s]==temp[s])
          {
              cnt++;
          }

      }
      if(cnt==ek.length())
      {
          ans++;
          f1=f1+'P';
          cout<<f1<<endl;
          continue;
      }
      int vtr=temp.length()-1;
      cnt=0;
        for(int s=0;s<ek.length();s++)
      {
          if(ek[s]==temp[vtr--])
          {
              cnt++;
          }

      }
      if(cnt==ek.length())
      {
          ans++;
          f1=f1+'S';
          cout<<f1<<endl;
      }
  }



  for(int l=0;l<v.size();l++)
  {
      string ek=v[l];
      cnt=0;
      for(int s=0;s<ek.length();s++)
      {
          if(ager[s]==ek[s])
          {
              cnt++;
          }

      }
      if(cnt==ek.length())
      {
          ans++;
          f2=f2+'P';
          continue;
      }
      int vtr=ager.length()-1;
      cnt=0;
        for(int s=0;s<ek.length();s++)
      {
          if(ek[s]==ager[vtr--])
          {
              cnt++;
          }

      }
      if(cnt==ek.length())
      {
          ans++;
          f2=f2+'S';
      }
  }
  if(f1.length()>f2.length())
    cout<<f1<<endl;
  else
    cout<<f2<<endl;
}
