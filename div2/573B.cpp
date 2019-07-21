#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
   // cout<<s1<<" "<<s2<<" "<<s3<<endl;
    int a,b;
   int m=0,p=0,s=0;
   if(s1[1]=='m')
    m++;
   if(s1[1]=='p')
    p++;
    if(s1[1]=='s')
    s++;
    if(s2[1]=='m')
    m++;
   if(s2[1]=='p')
    p++;
    if(s2[1]=='s')
    s++;

    if(s3[1]=='m')
    m++;
   if(s3[1]=='p')
    p++;
    if(s3[1]=='s')
    s++;
    if(m==p && p==s)
        cout<<"2"<<endl;
    else{
            int dif=100;
        if(m==3 || p==3 ||s==3)
        {
            int tmp=abs(s1[0]-s2[0]);
           int tmp2=abs(s2[0]-s3[0]);
           int tmp3=abs(s1[0]-s3[0]);
           if((s1[0]==s2[0] && s2[0]==s3[0]) )cout<<"0"<<endl;
            else if(max(tmp,max(tmp2,tmp3))<3 && (tmp==1||tmp2==1||tmp3==1) && tmp!=0 &&tmp2!=0 &&tmp3!=0)
            cout<<"0"<<endl;
           else{
            if(tmp==1 || tmp==2 ||tmp2==1 ||tmp2 ==2||tmp==0||tmp2==0|| tmp3==0 ||tmp3==1||tmp3==2)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
           }
        }
        else if(m==2)
        {
            if(s1[1]=='m' && s2[1]=='m')
             {a=s1[0]-'0';b=s2[0]-'0';}
             if(s2[1]=='m' && s3[1]=='m')
             {a=s2[0]-'0';b=s3[0]-'0';}
            if(s1[1]=='m' && s3[1]=='m')
             {a=s1[0]-'0';b=s3[0]-'0';}
             int dif=abs(a-b);
             if(dif<=2)
                cout<<"1"<<endl;
             else
                cout<<"2"<<endl;


        }
        else if(p==2)
        {
            if(s1[1]=='p' && s2[1]=='p')
             {a=s1[0]-'0';b=s2[0]-'0';}
             if(s2[1]=='p' && s3[1]=='p')
             {a=s2[0]-'0';b=s3[0]-'0';}
            if(s1[1]=='p' && s3[1]=='p')
             {a=s1[0]-'0';b=s3[0]-'0';}
             int dif=abs(a-b);
             if(dif<=2)
                cout<<"1"<<endl;
             else
                cout<<"2"<<endl;


        }
                else if(s==2)
        {
            if(s1[1]=='s' && s2[1]=='s')
             {a=s1[0]-'0';b=s2[0]-'0';}
             if(s2[1]=='s' && s3[1]=='s')
             {a=s2[0]-'0';b=s3[0]-'0';}
            if(s1[1]=='s' && s3[1]=='s')
             {a=s1[0]-'0';b=s3[0]-'0';}
             int dif=abs(a-b);
             if(dif<=2)
                cout<<"1"<<endl;
             else
                cout<<"2"<<endl;


        }
    }

}
