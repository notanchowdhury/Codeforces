#include<bits/stdc++.h>
using namespace std;
char prv='E';
int ans=-1;
void fun(int x,int pas)
{
    char cur;int now;
    if(x%4==0)
    {
        cur='D';
        now=pas;
        if(cur<prv)
        {
            prv=cur;
            ans=now;
        }
    }
     if(x%4==1)
    {
        cur='A';
        now=pas;
        if(cur<prv)
        {
            prv=cur;
            ans=now;
        }
    }
     if(x%4==3)
    {
        cur='B';
        now=pas;
        if(cur<prv)
        {
            prv=cur;
            ans=now;
        }
    }
     if(x%4==2)
    {
        cur='C';
        now=pas;
        if(cur<prv)
        {
            prv=cur;
            ans=now;
        }
    }


}
int main()
{
    int x;
    cin>>x;
    fun(x,0);
    fun(x+1,1);
    fun(x+2,2);
    cout<<ans<< " "<<prv<<endl;
}
