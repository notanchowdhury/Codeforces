#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t,n,k;
    int loop;
    scanf("%d",&t);
    for(loop=1;loop<=t;loop++)
    {
         scanf("%d %d",&n,&k);
         if(n<=k)
         {
             char r='a';
             for(int p=0;p<n;p++)
                printf("%c",r+p);
               // cout<<"vai"<<endl;

                printf("\n");
         }
         else{
           int temp=n/k;
           int rem=n%k;
           for(int b=1;b<=temp;b++)
           {
               char r='a';
             for(int p=0;p<k;p++)
                printf("%c",r+p);

               //4 cout<<"shala"<<endl;
         }
         char r='a';
        for(int p=0;p<rem;p++)
                printf("%c",r+p);
         printf("\n");
         }
    }
  //  printf("%d\n");

}

