#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s[1000],ap;
    int indx=1;
    for(int i=8; i<=1200; i+=8)
    {
        int tmp=i;
      ap=to_string(tmp);

       // cout<<ap<<" "<<ap.size()<<" "<<indx<<endl;
        int sz=0;
        s[indx++]=ap;
    }
    s[indx++]="0";
    string in;
    cin>>in;
    bool flg=false;
    for(int i=1; i<indx; i++)
    {
        int cnt=0;
        for(int j=0; j<in.size(); j++)
        {
            if(s[i][cnt]==in[j])
                cnt++;
            if(cnt==s[i].size())
                break;
        }
       // cout<<cnt<<endl;
        if(cnt==s[i].size())
        {
            flg=true;
            ap=s[i];
           // cout<<cnt<<" YES "<<i<<endl;
            break;
        }
    }
    if(flg)
        {cout<<"YES"<<endl;cout<<ap<<endl;}
    else
        cout<<"NO"<<endl;

}
