
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;



int main()
{
    IOS
    long long n,i,sum=0;
    cin>>n;
   sum=(n*(n+1));
   sum/=2;
   if(sum%2==0)
    cout<<"0"<<endl;
   else
    cout<<"1"<<endl;
}

