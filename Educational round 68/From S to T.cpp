#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t,p;int inds=0,indp=0;
        cin>>s>>t>>p;
        for(int i=0;i<t.size();i++)
        {
           if(s[inds]==t[i])
           {
               s[inds]='*';
               inds++;indp++;
               continue;

           }
           for(int j=0;j<p.size();j++)
           {
               if(p[j]==t[i])
               {
                   p[j]='*';indp++;
                   break;
               }
           }
        }
        if(indp==t.length())
        {
            int cnt=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='*')
                    cnt++;
            }
            if(cnt==s.size())
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
                cout<<"no"<<endl;
    }
}
