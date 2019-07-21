
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    long long int n;
    cin>>n;
    if(n==1)
        cout<<"2"<<endl;
   else if(n==2)
        cout<<"3"<<endl;
   else if(n==3)
        cout<<"4"<<endl;
    else
    {
        long long  p=sqrt(n);
        long long l=p;
        if(l*p==n)
        {
            cout<<(l+p)<<endl;
            return 0;
        }
        for(int i=1;; i++)
        {
            if(i%2==0)
            {
                p++;
            }
            else
            {
                l++;
            }
            if(l*p>=n)
            {
                cout<<(l+p)<<endl;
                return 0;
            }
        }


    }
}

