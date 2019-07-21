
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;



//string r_str = R"(Hello\tWorld\n)";
int main()
{
    IOS
    int n,keep=0,pls=0;
    cin>>n;
    char ar[109];
    for(int i=0;i<n;i++)
        cin>>ar[i];
  /*  for(int i=0;i<n;i++)
       if(ar[i]=='-')
       {
           keep=i;
           break;

       }
*/
        for(int i=keep;i<=n;i++)
        {
            if(ar[i]=='-' && pls>0)
                pls--;
            else if(ar[i]=='+')
                pls++;
        }
if(pls<0)
    cout<<"0"<<endl;
else
    cout<<pls<<endl;
return 0;

}

