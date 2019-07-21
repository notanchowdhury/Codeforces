#include<bits/stdc++.h>
using namespace std;
int a[6][100007];
vector<string>v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int o=0; o<5; o++)
    {
        for(int p=1; p<100001; p++)
        {
          a[o][p]=-1;
        }
    }
    int n,p,ind,m=0;
    cin>>n;
    p=n;
    queue<string>q2,ans;
    stack<string>q1;
    string s1,s2,s3,s4;
    int cnt=0;
    for(int h=0; h<n; h++)
    {
        cnt=0;
        string s;
        cin>>s;
        int sz=s.size();
        string last;
        v.push_back(s);
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                cnt++;
                if(s[i]=='a')
                    last="a";
                if(s[i]=='e')
                    last="e";
                if(s[i]=='i')
                    last="i";
                if(s[i]=='o')
                    last="o";
                if(s[i]=='u')
                    last="u";
            }
        }
        if(last=="a")
        {
            if(a[0][cnt]==-1)
                a[0][cnt]=h;
            else
            {
                q2.push(s);
                q2.push(v[a[0][cnt]]);
                  a[0][cnt]=-1;
            }
        }
        if(last=="e")
        {
            if(a[1][cnt]==-1)
                a[1][cnt]=h;
            else
            {
                q2.push(s);
                q2.push(v[a[1][cnt]]);
                 a[1][cnt]=-1;
            }
        }
        if(last=="i")
        {
            if(a[2][cnt]==-1)
                a[2][cnt]=h;
            else
            {
                 q2.push(s);
                q2.push(v[a[2][cnt]]);
                 a[2][cnt]=-1;
            }
        }
        if(last=="o")
        {
            if(a[3][cnt]==-1)
                a[3][cnt]=h;
            else
            {
                q2.push(s);
                q2.push(v[a[3][cnt]]);
                a[3][cnt]=-1;
            }
        }
        if(last=="u")
        {
            if(a[4][cnt]==-1)
                a[4][cnt]=h;
            else
            {
                q2.push(s);
                q2.push(v[a[4][cnt]]);
                a[4][cnt]=-1;
            }
        }
    }
    for(int p=1; p<100001; p++)
    {
        cnt =0;
        for(int o=0; o<5; o++)
        {
            if(a[o][p]!=-1)
            {
                q1.push(v[a[o][p]]);
                cnt++;
            }
        }
        if(cnt%2!=0)
            q1.pop();
    }
    string fin;
    int f=0;
    while(q1.size()>1 && q2.size()>1)
    {
        ans.push(q1.top());
        ans.push(q2.front());
        q1.pop();
        q2.pop();
        ans.push(q1.top());
        ans.push(q2.front());
        q1.pop();
        q2.pop();
        m++;
    }
    while(q2.size()>3)
    {
        s1=q2.front();
        q2.pop();
        s2=q2.front();
        q2.pop();
        s3=q2.front();
        q2.pop();
        s4=q2.front();
        q2.pop();
        ans.push(s1);
        ans.push(s3);
        ans.push(s2);
        ans.push(s4);
        m++;

    }
    cout<<m<<endl;
    while(!ans.empty())
    {
        fin=ans.front();
        cout<<fin;

        ans.pop();
        f++;
        if(f%2==0)
            cout<<endl;
        else
            cout<<" ";
    }
}
