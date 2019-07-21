


#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
  int lft[29],ri[29];

int main()
{
    IOS
    int t;
  string s;
  cin>>t;

    if(t<25)
        cout<<"-1"<<endl;
    else{
               int i,on,tw;
        for(i=5;i<=sqrt(t);i++)
        {
            if(t%i==0)
                break;
        }
       on=i;
       tw=t/i;
       if(on*tw != t)
        {cout<<"-1"<<endl;
       return 0;}
       char ar[on+1][tw+1];
       char v[6]={'a','e','i','o','u'};
       int strt=-1,vtr;

       for(int i=0;i<on;i++)
       {
           strt++;
           if(strt==5)
            strt=0;
        vtr=strt;
           for(int j=0;j<tw;j++)
           {

           ar[i][j]=v[vtr++];
           if(vtr==5)
            vtr=0;
           }
       }
       for(int i=0;i<on;i++)
        {for(int j=0;j<tw;j++)
           cout<<ar[i][j];
       }

    }
}






