
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;



int main()
{
    IOS
   int n,i,p,x,y,keep;
    cin>>n>>x>>y;
   vector<int>v;
   for( i=1;i<=n;i++)
   {
       cin>>p;
       v.push_back(p);
   }
   sort(v.begin(),v.end());
   if(x>y)
   {
       cout<<n<<endl;
       return 0;
   }
   keep=n;
   for(i=0;i<n;i++)
   {
       if(v[i]>x)
       {
           keep=i;
           break;
       }
   }
   keep+=1;
   keep/=2;
   cout<<keep<<endl;
}


