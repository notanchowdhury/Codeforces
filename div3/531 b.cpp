#include<bits/stdc++.h>

using namespace std;
int n,k,i,j,p,x,a[5005];
vector<int>g[5005];
int main(){
    cin>>n>>k;
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        g[x].push_back(i);
    }
    p=0;
    for(i=1;i<=5000;i++){
        if(g[i].size()>k){
            cout<<"NO";return 0;
        }else{
            for(j=0;j<g[i].size();j++){
                a[g[i][j]]=p+1;
                p++;p%=k;
            }
        }
    }
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
