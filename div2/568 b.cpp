#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int fi=0;
        //char tmp=s1[fi];
        char cur;
        bool flag =true;
        if(s1.size()>s2.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        queue<char>st;
       for(int i=0;i<s1.size();i++)
       {
           st.push(s1[i]);
       }
        cur=st.front();
        char prv;
        int cnt=0;
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==cur && cnt<s1.size())
            {
                st.pop();
                prv=cur;
                if(!st.empty())
                cur=st.front();

                cnt++;
               // cout<<cnt<<" "<<cur<<endl;
            }
            else if(s2[i]==prv && cnt!=0)
                continue;

            else
            {
                flag=false;
                break;
            }
        }
        if(flag && (cnt==s1.size()))
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

}

